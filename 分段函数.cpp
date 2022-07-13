#include <stdio.h>
int main()
{
	int x,c;
	scanf("%d",&x);
	if (x>0)
		c=1;
	else if (x == 0)
		c=2;
	else if (x<0)
		c=3;
	switch(c)
		{ 
		case 1:
			printf("%d",2*x);
			break;
		case 2:
			printf("0");
			break;
		case 3:
			printf("-1");
			break;
		} 
	return 0;	
}
