#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int i;
	int daan;
	daan=0;
	for(int i=1;i<=x;i++)
		{
			if(x%i==0)
				{
					daan++;
				}
		}
	if(daan%2==0)
		{
			printf("even");
		}
	else
		printf("odd");
 } 
