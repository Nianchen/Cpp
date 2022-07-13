#include<stdio.h>
int M(int *arr,int left,int right,int n);
int main()
{
	int c;
	int arr[]={13,45,78,90,127,189,243,355}; 
	scanf("%d",&c);
	M(arr,0,7,c);
 } 
int M(int *arr,int left,int right,int n)
{
	int k;
	if(left!=right)
	{
		k=(right-left)/2;
	}
	else
	{
		return k;
	}
	if(n==arr[k])
	{
		printf("%d",k);
	}
	else
	{
		M(arr,left,right-1,n);
		M(arr,left+1,right,n);
	}
}
