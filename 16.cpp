#include <stdio.h>
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
	for(int j=i-1;j>=0;j--)
		printf("%c",b[j]);
}
int main()
{
	int x;
	scanf("%d",&x);
	int j;
	scanf("%d",&j);
	if(j==16)
		{
			jinzhi16(x);
		} 
}
