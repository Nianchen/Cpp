#include <stdio.h>
int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	sum(x,y);
}
