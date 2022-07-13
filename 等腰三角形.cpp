#include <stdio.h>
int main()
{
	int i;
	int j;
	int x=5;
	for(int i=1;i<x;i=i+2)
		for(j=0;j<2*i-1;j++) 
			{
			printf("*");
			}
			
	return 0;
} 
