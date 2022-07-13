#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int *a;
	a = (int*)malloc(n*sizeof(int));
	int i;
	i=0; 
	while(i<n)
		{
			scanf("%d",&a);
			*a++; 
			i++;
		} 
	for(int i=0;i<n;i++)
		{
		printf("%d",*a);
		a++;
		}
	free(a);
 } 
