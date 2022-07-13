#include<stdio.h>
int main()
{
	int a=3,b=5;
	printf("%d %d\n",&a,&b);
	int *p;
	int *q;
	p=&a;
	q=&b;
	printf("%d %d\n",p,q);
	int *c;
	c=p;
	p=q;
	q=c;
	printf("%d %d\n",p,q);
	printf("%d %d",a,b); 
}
