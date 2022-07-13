#include <stdio.h>
int main()
{
	int x,zhong,c;
	scanf("%d",&x);
	int a[x];
	c=0;
	for(int i=0;i<x;i++)
		{
		scanf("%d",&a[i]);
		}
	for(int j=0;j<x;j++) //±éÀúÊý×é// 
		{
			zhong=a[j];
			for(int k=2;k<zhong;k++)
				{
					if(zhong%k==0)
						{
						printf("NO\n");
						break;		
						}	
						else
						{
						c=k;
						}				
				}
						
		}
	if(c!=0)
	printf("yse");

	return 0;
}
		
		 
	

