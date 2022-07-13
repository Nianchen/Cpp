#include<stdio.h>

int main()
{
	int a=1, sum=0;
	while (a <= 100)
	{
		sum = sum + a;
		a = a + 1;		
	}
	printf("½á¹ûÊÇ: %d\n",sum);
	return 0;
}
