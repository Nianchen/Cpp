#include<stdio.h>
int main()
{
 int N,i;
 scanf("%d",&N);
 for(i=2;i<=N;i++)
 {
  if(N%i==0)
  {
   printf("no");
   continue; 
  }
  else
  {
   printf("yes");
   continue; 
  }
 }
}
