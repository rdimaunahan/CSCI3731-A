#include <cstdio>
#include "factorial.h"


int main (int argc , char** argv){
	printf("Enter integer to know its factorial);
	int n;
	scanf("%d", &n);
	printf("The integer's factorial is %d", factorial(n));
}	

