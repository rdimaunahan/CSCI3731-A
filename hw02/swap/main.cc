#include <cstdio>
#include "swap.cc"
#include "swap.h"

int main(int argc , char** argv){
	int n,m;
	printf("Enter to first digit");
	scanf("%d\n",&n);
	printf("Enter to second digit");
	scanf("%d\n",&m);
	swap(&n,&m);
	printf("Number has been swapped, first digit is now %d and second digit is now %d", n,m);
}	
