#include<stdio.h>
int main()
{
	int a,b;
	for(a=0;a<=30;a++)
	{
		b=30-a;
		if(2*a+4*b==90)
			break;
	}
	printf("����%d,������%d",a,b);
	return 0;
}
