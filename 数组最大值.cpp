#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i,j;
	for (i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	int c;
	c= n-1;
		for(j=0;j<c;j++)
		{
			if(a[j]>a[c])
			printf("%d",a[j]);
	}
 } 
