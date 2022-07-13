#include <stdio.h>
#include <math.h>
int main()
{
	int x;
	scanf("%d",&x);
	int a,b,c;
	c=x%10;
	b=x/10%10;
	a=x/100%10;
	int zhong;
	zhong=pow(a,3)+pow(b,3)+pow(c,3);
	if(zhong==x)
		printf("TRUE");
	else
		printf("FALSE");
	 
}
