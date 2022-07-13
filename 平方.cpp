#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	for(int i=1;a%(int)pow(2,i)==0;)
		{
			i++;
			b=i-1;
		}
	printf("%d",b);
	
	
}
