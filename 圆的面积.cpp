/*#include<stdio.h>
int main()
{
	int r,a,s;
	printf("������Բ�İ뾶:");
	scanf("%d",&r);
	a = 3.14*r*r;
	s = 3.14*2*r;
	printf("Բ�����Ϊ��%d Բ���ܳ���%d",a,s);
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
		printf("������뾶"); 
		scanf("%f",&r)
	}
	void area()
	{
		float a=3.1415*radius*radius;
		cout<<"�����"<<a<<endl; 
	}
};
int main()
{
	circle xm;
	xm.set();
	xm.area();
	return 0;
	}		
