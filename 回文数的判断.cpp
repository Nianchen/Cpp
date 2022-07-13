#include <stdio.h>
int main ()
{
	int n,i,m;
	scanf("%d",&n);
	while(n>0)
		{
			m =m*10+n%10;
			n/=10;
		}
	printf("%d",m);
}
	 
