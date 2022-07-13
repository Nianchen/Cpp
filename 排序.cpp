#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int a[x];
	int i;
	for(int i=0;i<x;i++)
		scanf("%d",&a[i]);
	int j;
	for(int j=0;j<x;j++)
		{
			if(a[j]<a[j+1])
				{
				printf("%d",a[j]);
				a[j+1]=a[j];
				continue;
				}
		
		}
}
