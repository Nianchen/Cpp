#include <stdio.h>
int main ()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(0<= a+b && a+b<=3)
		{
			printf("YES");
		}
	else if(a+b>=4)
		{
			printf("NO");
		 } 
	else
		{
			printf("negative");
		}
}
