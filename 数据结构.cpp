#include <stdio.h>
struct stu{
	char name[4000]; //����
	int num; //ѧ��
	int age; //����
	char group; //����С��
	float score; //�ɼ�
	}stus[20];
 int main()
{
printf("������¼��ѧ��������");
int x,i;
scanf("%d",&x);
printf("¼���ʽ������ ѧ�� ���� С�� �ɼ�\n");
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
