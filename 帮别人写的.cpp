#include <stdio.h>
int main ()
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	if(a>b)
	   {
		printf("%d\n",a);
		c=a;
		}
	else
	{
		printf("%d\n",b);
		c=b; 
	} 
	int i;
	for (i=2;i<c;i++)
		{
		if(a % i == 0 and b % i ==0)
				d=i; 
		}
	printf("%d",d);
 } 
