#include <stdio.h>
#include <string.h>
int main()
{
	int x,zhong,i,j;
	scanf("%d",&x);
    char str[x][10000];
    for(int i=1;i<=x;i++)
    	{
		scanf("%s",&str[i]);
		}
	for(int i=1;j<x;i++)
		for(int j=0;j<1000000;j++)
			{
			if(str[i][j]==0)
				{
				zhong=j;
				printf("%d",zhong);	
				}
			else 
				printf("%d",sizeof(str[i])/sizeof(1));
			} 
}
 
