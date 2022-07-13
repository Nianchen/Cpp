#include <stdio.h>
int main()
{
	float x,y;
	scanf("%f %f",&x,&y);
	double z;
	z=y/x*100;
	char c;
	c='%';
	printf("%.3lf%c",z,c);
	
}
