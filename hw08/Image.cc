#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <jpeglib.h>
#include <stdlib.h>
#include "Image.h"

Image::Image(){
	this->width = 0;
	this->length = 0;
	this->pixel = nullptr;
}
Image::~Image(){
	delete[] pixel;
}
Image::Image(const Image& img){
	this->width = img.width;
	this->length = img.length;
	pixel = new unsigned char[3* img.width * img.length];
	for(int i = 0; i < 3* img.width * img.length; i++){
		pixel[i] = img.pixel[i];
	}
}
Image& Image::operator=(const Image& img){
	this->width = img.width;
	this->length = img.length;
	delete[] pixel;
	pixel = new unsigned char[3* img.width * img.length];
	for(int i = 0; i < 3* img.width * img.length; i++){
		pixel[i] = img.pixel[i];
	}
	return *this;
}
Image::Image(Image&& i){
	this->width = i.width;
	this->length = i.length;
	pixel = i.pixel;
	i.pixel = nullptr;
}
Image& Image::operator=(Image&& i){
	this->width = i.width;
	this->length = i.length;
	delete[] pixel;
	pixel = i.pixel;
	i.pixel = nullptr;
	return *this;
}
int Image::getWidth() const{
	return width;
}
int Image::getLength() const{
	return length;
}
unsigned char* Image::getPixel() const{
	return pixel;
}
void Image::set(int width, int length, unsigned char* pixel){
	this->width = width;
	this->length = length;
	this->pixel = pixel;
}
void Image::writePPM(const char* filename){
	FILE* fw = fopen(filename,"wb");
	fprintf(fw, "%s\n", "P6");
	fprintf(fw, "%d %d\n", width, length);
	fprintf(fw, "%d\n", 255);
	
	int size = 3*width*length;
	fwrite(pixel, sizeof(*pixel),size, fw);
	
	printf("\nWriting succeeded");
	fclose(fw);
}
int Image::writeJpeg(const char* filename){
	struct jpeg_compress_struct cinfo;
	struct jpeg_error_mgr jerr;
	
	JSAMPROW row_pointer[1];
	FILE *outfile = fopen( filename, "wb" );
	
	if ( !outfile )
	{
		printf("Error opening output jpeg file!" );
		return -1;
	}
	cinfo.err = jpeg_std_error( &jerr );
	jpeg_create_compress(&cinfo);
	jpeg_stdio_dest(&cinfo, outfile);


	cinfo.image_width = width;	
	cinfo.image_height = length;
	cinfo.input_components = 3;
	cinfo.in_color_space = JCS_RGB;

	jpeg_set_defaults( &cinfo );

	jpeg_start_compress( &cinfo, TRUE );
	while( cinfo.next_scanline < cinfo.image_height )
	{
		row_pointer[0] = &pixel[ cinfo.next_scanline * cinfo.image_width *  cinfo.input_components];
		jpeg_write_scanlines( &cinfo, row_pointer, 1 );
	}

	jpeg_finish_compress( &cinfo );
	jpeg_destroy_compress( &cinfo );
	fclose( outfile );

	return 1;
}
void Image::read(const char* filename){
	char indicator[3];
	FILE* fo = fopen(filename,"rb");
	fscanf(fo,"%s",indicator);
	if(strncmp(indicator,"P6",3) != 0){
	printf("This file is not a ppm file");
	}
	fscanf(fo,"%d %d\n", &width, &length);
	fscanf(fo,"255\n");
	
	int size = 3 * width * length;

	pixel = new unsigned char[size];
	fread(pixel, sizeof(*pixel), size, fo);

	fclose(fo);
}
std::ostream& operator<<(std::ostream& out, const Image& image){
	out<<"Width = "<<image.width<<" and Heigth = "<<image.length;
	return out;
}