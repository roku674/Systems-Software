//to compile this program: gcc squareroot.c -lm -o squareroot
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	float d,r;
	double d1,r1;
	printf("enter a positive number or 0: ");
	scanf("%f",&d);
	if(d<0)
	{
		fprintf(stderr,"your input should not be negative.\n");
		exit(0);
	}
	r=sqrt(d);
	printf("The square root of %f is %f\n",d,r);
	
	printf("enter a positive number or 0: ");
	scanf("%lg",&d1);
	if(d1<0)
	{
		fprintf(stderr,"your input should not be negative.\n");
		exit(0);
	}
	r1=sqrt(d1);
	printf("The square root of %f is %f\n",d1,r1);
	
	if(argc>1)
	{
		d1=atof(argv[1]);
		if(d1<0)
		{
			fprintf(stderr,"your command line argument should not be negative.\n");
			exit(0);
		}
		r1=sqrt(d1);
		printf("The square root of %f is %f\n",d1,r1);
	}
	return 0;
}
