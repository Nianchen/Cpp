#include <stdio.h>
int main()
{
	int x,y,temp;
	int i,j,d=0;
	scanf("%d%d",&x,&y);
	int a[x];
	for(int i=0;i<x;i++)
		{
			scanf("%d",&a[i]);
		}
	 	for( i=0;i<x-1;i++)
		{
		for( j=0;j<(x-1-i);j++)
			{
				if(a[j]>a[j+1])
					{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					}
			}
		}
	int sum=0;
	for(int i=0;d<y;i++)
	 {
	 	if(a[i+1]!=a[i])
	 		{
	 		sum+=a[i];
	 		d++;
	 		}
	 }
	printf("%d",sum);
	}
