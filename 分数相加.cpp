#include <stdio.h>
#include <math.h>
int main()
{
	int n,i;
	float sun;
	scanf("%d",&n);
	for( i=1 ; i<=n ;i++)
		{
			sun += 1.0/i*pow(-1,i+1);
		}
	printf("%.1f",sun);
	return 0;
}
 
