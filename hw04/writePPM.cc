#include <cstdio>

void writePPM(char* filename, int width, int height, unsigned int** pixel){
	FILE* fw = fopen(filename,"wb");
	fprintf(fw, "%s\n", "P6");
	fprintf(fw, "%d %d\n", width, height);
	
	unsigned char* data = new unsigned char[height * width * 3];
	unsigned char* pix = (unsigned char*)(*pixel);
	
	for(int i = 0, j = 0;i < (height * width * 4);i++){
		if(i%4 != 0){
			data[j++] = pix[i];
		}
	}
	
	int size = 3*width*height;
	fwrite(data, sizeof(*data),size, fw);

	printf("\nWriting succeeded");
	fclose(fw);
	
}