#include<stdio.h>
int main()
{
	int i,j=0,x=0,y,n;
	int a[10010];
	int b[10010];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	 if(a[i]==1)
	 x++;
    } 
    for(i=0;i<n;i++)
    {
    	if(a[i]==1&&(i-1)>0)
    	{
		b[j]=a[i-1];
		j++;
    	}
    	if(a[i+1]==0)
    	{
    		b[j]=a[i];
    		j++;
		}
	}
    printf("%d\n",x);
    for(i=0;b[i]!=0;i++)
    printf("%d ",b[i]);
    return 0;
}

