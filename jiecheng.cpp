#include <stdio.h>
int main()
{
	int x,y,c;
	scanf("%f%f",&x,&y); 	
		if(y == 2 && x%400==0||(x%4==0 && x%100 != 0))	
		{
			printf("29");
			break;
		}
		else if (y == 2 && x%400 != 0)
		{
			printf("28");
		}
		else if (y == 1)
		{
			printf("31");
		}

	
}
