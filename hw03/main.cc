#include <cstdio>
#include "readPPM.h"
#include "writePPM.h"

int main(int argc , char** argv){
	char fileName[50] = "test.ppm";
	int width = 0;  
	int height = 0;
	int max = 0;
	
	unsigned char* pixel = readPPM(fileName, &width, &height, &max);
	
	printf("Width = %d\n", width);
	printf("Height = %d\n", height);
	printf("Max size = %d\n", max);
	
	char file[50] = "test2.ppm";
	writePPM(file, width, height, pixel);
}	
