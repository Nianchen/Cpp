#include<stdio.h>
int main()
{
    int x,j,i;
    int b[10000];
    while (scanf("%d",&x) != EOF)
    	while(x>=1)
		{
		b[i]=x%3;
		x=x/3;
		i++;	
		} 
	for(int j=i-1;j>=0;j--)
		printf("%d",b[j]);
        printf("\n");
}
