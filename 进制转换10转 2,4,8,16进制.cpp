#include <stdio.h>
int jinzhi2(int x)
{
	int b[100000];
	int i=0;
	while(x>=1)
	{
		b[i]=x%2;
		x=x/2;
		i++;	
	}
	printf("������Ϊ��"); 
	for(int j=i-1;j>=0;j--)
		printf("%d",b[j]);
}
int jinzhi4(int x)
{
	int b[100000];
	int i=0;
	while(x>=1)
	{
		b[i]=x%4;
		x=x/4;
		i++;	
	}
	printf("�Ľ���Ϊ��"); 
	for(int j=i-1;j>=0;j--)
		printf("%d",b[j]);
}
int jinzhi8(int x)
{
	int b[100000];
	int i=0;
	while(x>=1)
	{
		b[i]=x%8;
		x=x/8;
		i++;	
	}
		printf("�˽���Ϊ��"); 
	for(int j=i-1;j>=0;j--)
		printf("%d",b[j]);
}
int jinzhi16(int x)
{
	char b[100000];
	int i=0;
	int c;
	while(x>=1)
	{
		c=x%16;
		switch(c)
		 {
		 	case 0:
				b[i]='0';break; 
			case 1:
				b[i]='1';break;
			case 2:
				b[i]='2';break; 
			case 3:
				b[i]='3';break;	
			case 4:
				b[i]='4';break; 
			case 5:
				b[i]='5';break;
			case 6:
				b[i]='6';break; 
			case 7:
				b[i]='7';break;
			case 8:
				b[i]='8';break;
			case 9:
				b[i]='9';break;
			case 10:
				b[i]='a';break;
			case 11:
				b[i]='b';break;
			case 12:
				b[i]='c';break;
			case 13:
				b[i]='d';break;
			case 14:
				b[i]='e';break;
			case 15:
				b[i]='f';break;
				
		 }
		x=x/16;
		i++;	
	}
		printf("ʮ������Ϊ��"); 
	for(int j=i-1;j>=0;j--)
		printf("%c",b[j]);
}
int main()
{
	int x;
	printf("������ʮ�������֣�"); 
	scanf("%d",&x);
	int m;
	printf("������Ŀ����ƣ�"); 
	scanf("%d",&m);
	switch(m)
		{
			case 2:
				jinzhi2(x);break;
			case 4:
				jinzhi4(x);break;
			case 8:
				jinzhi8(x);break; 
			case 16:
				jinzhi16(x);break; 
		}
 } 
