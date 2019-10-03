#include <cstdio>

void writePPM(char* filename, int width, int heigth, unsigned char* pixel){
	FILE* fw = fopen(filename,"wb");
	fprintf(fw, "%s\n", "P6");
	fprintf(fw, "%d %d\n", width, heigth);
	fprintf(fw, "%d\n", 255);
	
	int size = 3*width*heigth;
	fwrite(pixel, sizeof(*pixel),size, fw);
	
	printf("\nWriting succeeded");
	fclose(fw);
	
}