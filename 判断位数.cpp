#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x); 
	int i,j;
	if(x>10) 
	{ 
	i=x;
	j=0;
	while(i>1)
		{
			i/=10;
			j++; 
		} 
	if(j=2 and i!=1)
		printf("1");
	else
		printf("0");
	} 
	else if(x=10)
		printf("1");
	else if(x<10)
		printf("0");
}
