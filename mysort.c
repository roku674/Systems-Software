#include <time.h>
#include "mysort.h"

void generateNums(int *myarr, int len)
{
	int i;
	srand(time(NULL));//when you call srand, the generated random numbers will vary depending on time

	for(i = 0; i < len; i++){
		myarr[i] = rand() % 1001;//make the random integers lie between 0 and 1000
	}
}

//insertion sort
void sortNums(int *myarr, int len)
{
	int i,j,t;
	for(i = 1; i < len; i++){
		t = myarr[i];
		j=i-1;
		while(j >= 0 && myarr[j] >t)
		{
			myarr[j+1] = myarr[j];
			j--;
		}
		myarr[j+1]=t;
	}
}
