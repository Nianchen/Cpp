#include<stdio.h>
void fun(int num)
	{
		if(num>2)
			{
				num--;
				fun(num);
			}
		printf("%d",num);
	}
int main()
{
	int x=4;
	fun(4);
 } 
