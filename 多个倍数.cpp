#include <stdio.h>
int main() 
{
	int i,n,m;
	m=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			if(i%2 == 0||i%5 == 0||i%3 == 0)
				{
					m++;
				} 
		} 
	printf("%d",m);	 
}
