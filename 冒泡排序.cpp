#include<stdio.h>
#include<string.h>
void swap(char *x,char*y){
	char *p;
	p=x;
	x=y;
	y=p;
}
int  main()
{ 
	char a[5][20]{"Follow me","BASIC","Great Wall","FORTRAN,Computer","design"};
	int i,j,temp;
	char *p;
	char *q;
	p=&a[0];
	q=&a[1];
	swap(&p,&q);
	for(i=0;i<5;i++){
		printf("%s \n",a[i]);
	}
    return 0;
} 
