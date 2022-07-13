/*#include<stdio.h>
int main()
{
	int r,a,s;
	printf("请输入圆的半径:");
	scanf("%d",&r);
	a = 3.14*r*r;
	s = 3.14*2*r;
	printf("圆的面积为：%d 圆的周长；%d",a,s);
	return 0;
	
}*/




/*#include <iostream>
float area(float r)
{
	float a=3.1415*r*r;
	return a;
}
float pre(float r)
{
	float s=2*3.1415*r;
}
int main()
{
	float radius,a,s;
	scanf("%f",&radius);
	a=area(radius);
	s=pre(radius);
	printf("%f  %f",a,s);
}*/

#include<iostream>
class circle
{
float raduis;
	public:
		void set ()
	{
		float r;
		printf("请输入半径"); 
		scanf("%f",&r)
	}
	void area()
	{
		float a=3.1415*radius*radius;
		cout<<"面积："<<a<<endl; 
	}
};
int main()
{
	circle xm;
	xm.set();
	xm.area();
	return 0;
	}		
