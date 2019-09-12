#include <cstdio>

int main(int argc , char** argv){
	int count;
	FILE* fo = fopen("log","r");
	if(fo == NULL){
		count = 0;
	}
	fscanf(fo,"%d",&count);
	fclose(fo);
	
	++count;
	printf("%d",count);

	FILE* fp = fopen("log","w");
	fprintf(fp,"%d",count);
	fclose(fp);
}	