#include <cstdio>
#include "cubed.h"

int main(int argc , char** argv){
	printf("Enter integer to know its cubed value");
	int n;
	scanf("%d", &n);
	printf("The integer's cube is %d", cubed(n));
}	

int cubed(int num){
	return num*num*num;
}

