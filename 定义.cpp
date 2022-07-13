#include<stdio.h>

#define URL "http://www.fishc.com"
#define NAME "小甲鱼"
#define BOSS "甲鱼"
#define YEAR 2010
#define MONTH 5
#define DAY 20

int main()
{
	printf("%s成立于%d年%d月%d日",NAME,YEAR,MONTH,DAY);
	printf("%s是%s成立的  \n",NAME,BOSS);
	printf("域名是%s\n",URL);
	return 0; 
}
 
