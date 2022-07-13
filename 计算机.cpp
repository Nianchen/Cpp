#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int a[x];
	int i;
	int y;
	for(int i=0;i<x;i++)
		scanf("%d",&a[i]); 
	for(int i=0;i<x;i++)
		{
		if(a[i]>=0&&a[i]<=100)
		{
			y=a[i]/10;
			switch(y)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					printf("E\n");break;
				case 6:
					printf("D\n");break;
				case 7:
					printf("C\n");break;
				case 8:
					printf("B\n");break;
				case 9:
				case 10:
					printf("A\n");break; 
			}
		}
		else 
			printf("No answer!\n");
		}
}
