#include <stdio.h>
int prime(int m)
{
	int i;
	if(m==0) return 0;
	if(m==1) return 0;//����0��1�����
	for(i=2;i<m;i++)//û�еȺ� 
	if (m%i==0) break;
	if(i<m) return 0;//��if(i>=m) return 1;�Ǵ���� 
	else return 1;
} 
int main()
{
	int x;
	scanf("%d",&x);
	int a[x];
	int i; 
	for(int i=0;i<x;i++)
		scanf("%d",&a[i]);
	int sum;
	for(int j=0;j<x;j++)
	{
	for(i=1;i<=a[j];i++)
		{
			if(prime(i)==1&&(prime(i+1)==1||prime(i+2)==1))
				sum++;
		}
	printf("%d\n",sum);
	sum=0; 
	}
	
	
 } 
