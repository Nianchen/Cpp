#include <stdio.h>
int main()
{
	int x=10;
	int y=9;
	int a,b,c;
	a=(--x==y++)?--x:++y;
	b=x++;
	c=y;
	a=(b++,c++);
	printf("%d %d %d",a,b,c);
}
