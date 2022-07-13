#include<stdio.h>
int  main()
{ 
	int a[]={1,3,5,4,8,7,6,9,0,2};
	int n=10;
	int i,j,max,min;
	max=0;
	min=0;
	int zhong1,zhong2;
	for(int i=0;i<9;i++)
		{
			if(a[i]>=a[i+1])
				{
					max=a[i];
					zhong1=i;
				}
		 }
		for(int i=0;i<9;i++)
		{
			if(a[i]<=a[i+1])
				{
					min=a[i];
					zhong2=i;
				}
		 }
	a[zhong1]=min;
	a[zhong2]=max;
	for(int i=0;i<n;i++)
		printf("%d",a[i]);
	

}
