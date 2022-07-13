#include <stdio.h>
#include<math.h>
int main()
{
	int x;
	scanf("%d",&x);
	int a[x];
	int b;
	for(int i=0;i<x;i++)
		{
			scanf("%d",&a[i]);
		}
	for(int i=0;i<x;i++)
		{
			if(sqrt(a[i])==(int)sqrt(a[i]))
				{
					b++;
				}
		}
	if(b==x)
		{
			printf("Yes");
		}
	else
		{
			printf("No");
		}
}
