#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char a[n][50];
	int i,zhong,qishi;
	int j=0;
	for(int i=0;i<n;i++)
		{
			scanf("%s",&a[i]);
			for(;j<50;j++)
				{
					if(a[i][j-1]=='0'&&a[i][j]=='1')
							qishi=j; 
					if(a[i][j]=='1'&&a[i][j+1]=='1')
						{
							zhong=j;
						}
				}
				printf("%d",qishi+1);
			printf("%d",zhong-qishi);
		 } 
}
