#include <stdio.h>
struct stu{
	char name[4000]; //姓名
	int num; //学号
	int age; //年龄
	char group; //所在小组
	float score; //成绩
	}stus[20];
 int main()
{
printf("请输入录入学生个数：");
int x,i;
scanf("%d",&x);
printf("录入格式：姓名 学号 年龄 小组 成绩\n");
for(int i=0;i<x;i++)
{
	scanf("%s",&stus[i].name); 
	scanf("%d",&stus[i].num); 
	scanf("%d",&stus[i].age); 
	scanf("%d",&stus[i].group); 
	scanf("%f",&stus[i].score); 
}
printf("Name\t\tNum\tAge\tGroup\tScore\t\n");
for(int i=0;i<x;i++)
	printf("%s\t%d\t%d\t%c\t%.1f\n", stus[i].name, stus[i].num, stus[i].age, stus[i].group,stus[i].score);
 return 0;
 }
