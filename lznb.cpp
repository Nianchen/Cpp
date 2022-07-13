#include <stdio.h>
int main()
{
	int a,b;
	int a1,a2; 
	scanf("%d%d",&a,&b);
	if(a%2==0)
		a1=1;
	else
		a1=0;
	if(b%2==0)
		a2=1;
	else
		a2=0;
	if(a1==0 && a2==0)
		printf("LZNB!");
	if((a1==0 && a2==1)||(a1==1 && a2==0))
		printf("ZHYNB!");
	if(a1==1 && a2==1)
		printf("HSQSB!");
}
