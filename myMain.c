#include <stdio.h>
#include <stdlib.h>
#include "mysort.h"

void usage(char *s)
{
	fprintf(stderr,"usage: %s <num_of_integers>\n",s);
	exit(0);
}

int main(int argc, char *argv[]) {
	int len,i;
	if(argc!=2) usage(argv[0]);
	len=atoi(argv[1]);
	if(len<=0) {fprintf(stderr,"<num_of_integers> should be positive\n"); exit(0);}
	int *myarr;
	myarr=(int*)malloc(len*sizeof(int));
	if(myarr==NULL) {fprintf(stderr,"memory allocation for myarr failed\n"); exit(0);}
	
	generateNums(myarr, len);//call function in mysort.h to generate len random integers
	
	printf("Unsorted myarr: ");
	for(i = 0; i < len; i++){
		printf("%d ", myarr[i]);
	}
	printf("\n");
	
	sortNums(myarr, len);//call function in mysort.h to sort the len random integers
	
	printf("\nSorted myarr: ");
	for(i = 0; i < len; i++){
		printf("%d ", myarr[i]);
	}
	printf("\n");
	free(myarr);//deallocate storage on heap
	//myarr can be reused and be assigned a different memory address as long as still in main
	return 0;
}
