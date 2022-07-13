#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	int i;
	int zhong;
	for(int i=10;i<=100;i++)
		{
			if(i%3==x && i%5==y &&i%7==z)
				{
					zhong=1;
					break;
				}

		}
	if(zhong==1)
		printf("%d",i);
	else
		printf("No answer");
 } 
