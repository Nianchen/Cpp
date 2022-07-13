#include <stdio.h>
int main ()
{
	int sum;
	int i;
	i=0;
 do
    {
       sum=sum+i;
       i=i+1;
    }while(i<=1000);
	printf("%d",sum);
 } 
