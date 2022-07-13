#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int i,j,k;
	for(int i=1;i<=9;i++)
		{
			for(int j=1;j<=i;j++)
				{
					printf("%d*%d=%d ",j,i,i*j);
				}
			printf("\n");
		}
 } 
