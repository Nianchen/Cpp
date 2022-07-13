#include <stdio.h>
int main ()
{
	int n,i,m,shuru;
	scanf("%d",&n);
	shuru=n;
	while(n>0)
		{
			m =m*10+n%10;
			n/=10;
		}
	if(m == shuru)
		printf("yes");
	else 
		printf("no");
}
	 
