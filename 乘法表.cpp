#include <stdio.h>
int main()
{
	int i,b,x,j;
	x=1;
	b=9;
	for(i=1;i<=b;i++)
		{
		for(j=1;j<=i;j++)
			{
			printf("%d*%d=%d ",i,j,i*j);
			}
			printf("\n");
		}
}
