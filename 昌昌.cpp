#include <stdio.h>
int main()
{
	int i,n,a,b;
	scanf("%d",&n);
	int c[10000];
	int d=0;
	for(int i=0;i<n;i++)
		{
			scanf("%d %d",&c[d],&c[d+1]);
			d=d+2;
		}
	int j,m;
	 m=0;
	for(int j=0;j<n;j++)
		{
		printf("%d\n",c[m]+c[m+1]);
		m=m+2;	
		}
 } 
