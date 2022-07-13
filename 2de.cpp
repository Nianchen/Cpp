#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int a[x];
	int i;
	int b[i];
	for(int i=0;i<x;i++)
		{
			scanf("%d",&a[i]);
			b[i]=0;
		}
	for(int i=0;i<x;i++)
		{
			while(a[i]%8==0)
				{
					a[i]=a[i]/2;
					b[i]++;
				}
			printf("%d\n",b[i]*3);
		}

}
