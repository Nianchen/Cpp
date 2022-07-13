#include <stdio.h>
int main()
{
  int x,n,y,daan;
 scanf("%d",&x);  
   n=(x<0)?1:(x=0)?2:(x>0)?3:4;
	switch(n)
{
case 1:printf("-1");break;
case 2:printf("0");break;
case 3:printf("%d",2*x);break;
}
}

