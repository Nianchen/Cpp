#include <stdio.h>
int main()
{
	int a[3][2]={{1,2},{2,3},{3,4}};
	int b[2][3];
	int c[6];
	int i,j,z;
	z=0;
	for(int i=0;i<3;i++)
		{
			for(int j=0;j<2;j++)
				{
				c[z]=a[i][j];
				z++;
				}
		}
	z=0;
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<3;j++)
				{
				b[i][j]=c[z];
				z++;
				}
		}
		
 } 
