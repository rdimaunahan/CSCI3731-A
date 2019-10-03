#include <cstdio>
#include <cstring>

unsigned char* readPPM(char* filename, int* width, int* heigth, int* max){
	char indicator[3];
	
	FILE* fo = fopen(filename,"rb");
	fscanf(fo,"%s",indicator);
	if(strncmp(indicator,"P6",3) != 0){
	printf("This file is not a ppm file");
	}
	fscanf(fo,"%d %d\n", width, heigth);
	fscanf(fo,"%d\n", max);
	
	int size = 3* *width * *heigth;

	unsigned char* pixel = new unsigned char[size];
	fread(pixel, sizeof(*pixel), size, fo);

	fclose(fo);
	
	
	return pixel;
}