#include <cstdio>
#include <cstring>

unsigned int** readPPM(char* filename, int* width, int* height){
	char indicator[3];
	
	FILE* fo = fopen(filename,"rb");
	fscanf(fo,"%s",indicator);
	if(strncmp(indicator,"P6",3) != 0){
	printf("This file is not a ppm file");
	}
	fscanf(fo,"%d %d\n", width, height);
	
	int size = 3* *width * *height;
	
	unsigned char* pixel = new unsigned char[size];
	fread(pixel, sizeof(*pixel), size, fo);
	
	unsigned int** ptr = new unsigned int*[*height];
	*ptr  = new unsigned int[*width * *height];
	
	unsigned char* pix = (unsigned char*)(*ptr);
	for(int i = 0, j = 0;i < (*height * *width * 4);i++){
		if(i%4 == 0){
			pix[i] = 255;
		}
		else{
		pix[i] = (int)pixel[j++];
		}
	}
	
	fclose(fo);
	printf("Reading Successful\n");
	
	return ptr;
}