#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	int i;
	int j;
	int b;
	for(int i=1;i<=3;i++)
		{
			for(b=0;b<3-i;b++)
				{
					printf(" ");
				}
			for(int j=0;j<(2*i-1);j++)
			{
				printf("%c",a);
			}
			printf("\n");
		}
	return 0;
	
 } 
