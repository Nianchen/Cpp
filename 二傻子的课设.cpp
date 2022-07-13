#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int geshu,i;
typedef struct student
{
	char bianhao[4];
	char name[30];
	char sex[4];
	int age;
	float score[4];
	struct student *next;
}S;
struct student *header=(S*)malloc(sizeof(S));
int change();
void set()
{
	S *p=header;
	int n;
	printf("\t\t\t请输入你需要创建几个学生信息:");
	scanf("%d",&n);
	while(n<=0)
	{
		printf("\t\t\t格式错误,请重新输入:");
		scanf("%d",&n);
	}
	while(p->next!=NULL)
    {
    	p=p->next;
	} 	
	while(n--)
{
		struct  student *q=(struct student *)malloc(sizeof(struct student));//开辟新 
		printf("\t\t\t请输入编号(6位):");
		scanf("%s",q->bianhao);
		char *b;
		while(strlen(q->bianhao)!=6)
		{
			printf("\t\t\t1格式错误，请重新输入:");
			scanf("%s",q->bianhao);
		 } 
		b=q->bianhao;
		printf("\t\t\t我劝你认真想想自己到底叫啥\n");
		printf("\t\t\t请输入名字:");
		scanf("%s",q->name);
		char *a;
		a=q->name;
		printf("\t\t\t请输入成绩（语文 数学 英语 专业课）:");
		scanf("%f %f %f %f",&q->score[0],&q->score[1],&q->score[2],&q->score[3]);
		geshu++;
		q->next=NULL;
		p->next=q;
		p=q;

}
	printf("\t\t\t创建完成!\n");
}
void chakanall()
{
	S *p=header;
	printf("\n姓名\t编号\t语文成绩\t数学成绩\t英语成绩\t专业课成绩\n");
	while(p->next!=NULL)
		{
			printf("%s\t%s\t%f\t%f\t%f\t%f\n",p->next->name,p->next->bianhao,p->next->score[0],p->next->score[1],p->next->score[2],p->next->score[3]);
			p=p->next;
			if(p->next==NULL)
			break;
		}
	printf("输出完成!\n");
}
int chazhao()
{
	S *p=header;
	printf("\t\t\t请输入你要查找的学生姓名:");
	char a[20];
	scanf("%s",a);
	while(NULL != p->next)
		{
			if(strcmp(p->next->name,a)==0)
				{
				printf("\t\t查找成功\n");
				printf("\n姓名\t编号\t语文成绩\t数学成绩\t英语成绩\t专业课成绩\n");
				printf("%s\t%s\t%s\t%f\t%f\t%f\t%f\n",p->next->name,p->next->bianhao,p->next->score[0],p->next->score[1],p->next->score[2],p->next->score[3]);
				return 0;
				}
			else
				p=p->next; 
		}
	printf("\t\t\t无此数据,查找失败，输入错误或成绩未录入");
}
void welcome()
{

	printf("		*********************************************************\n"); 
	printf("		*            欢迎使用学生成绩管理系统   	        *\n");
	printf("		*********************************************************\n");
	printf("		*	  	   选择功能列表		 		*\n");
	printf("		*********************************************************\n");
	printf("		*		1.录入学生信息		               	*\n");
	printf("		*		2.打印学生信息	             		*\n");
	printf("		*		3.查找学生信息		             	*\n");
	printf("		*		4.修改学生信息		            	*\n");
	printf("		*		5.删除学生信息		             	*\n");
	printf("		*		0.退出系统				*\n");
	printf("		*********************************************************\n");
	printf("\t\t\t请按键：\n"); 
	i=getch();
	while(i<48||i>54)
		{
			system("cls");
			welcome();
		}
	switch(i)
		{
			case 49:
				set();break;
			case 50:
				chakanall();break;
			case 51:
				chazhao();break;
			case 52:
				change();break;
			case 53:
				shanchu();break;
			case 48:
				exit(0); 
		}
}
int change()
{
	S *p=header;
	printf("\t\t\t请输入你要修改的学生编号:");
	char a[20];
	scanf("%s",a);
	while(NULL != p->next)
		{
			if(strcmp(p->next->bianhao,a)==0)
				{
				printf("\t\t查找成功:%s\n",p->next->name);
				printf("                             ***************************************\n");
				printf("                             *             修改姓名：1             *\n");
				printf("                             *             修改学号：2             *\n");
				printf("                             *             修改班级：3             *\n");
				printf("                             *             修改成绩：4             *\n");
				printf("                             *             返回上一级：5           *\n");
				printf("                             ***************************************\n");
				int y;
				y=getch();
				while(y<48||y>53)
				{
				system("cls");
				change();
				}
				switch(y)
				{
						case 49:
							{
							printf("\t\t\t请输入修改后姓名：");
							scanf("%s",p->next->name);
							printf("\t\t\t修改成功\n"); 
							break; 
							}
						case 50:
							{
							printf("\t\t\t请输入修改后编号：");
							scanf("%s",p->next->bianhao);
							while(strlen(p->next->bianhao)!=6)
							{				
							printf("\t\t\t编号格式错误，请重新输入:\n");
							scanf("%s",p->next->bianhao);
		 					} 
							printf("\t\t\t修改成功\n"); 
							break; 
							}
						case 51:
							{
							printf("\t\t\t请输入要修改的科目：\n");
							printf("                             ***************************************\n");
							printf("                             *             修改语文：1             *\n");
							printf("                             *             修改数学：2             *\n");
							printf("                             *             修改英语：3             *\n");
							printf("                             *             修改专业课：4           *\n");
							printf("                             ***************************************\n");
							int y;
							y=getch();
							while(y<48||y>52)
							{
							system("cls");
							y=getch();
							}
							switch(y)
								{
									case 49:
										{ 
										printf("\t\t\t请输入修改后语文成绩：");
										scanf("%f",&p->next->score[0]);
										break;
										} 
									case 50:
										{ 
										printf("\t\t\t请输入修改后数学成绩：");
										scanf("%f",&p->next->score[1]);
										break;
										} 
									case 51:
										{ 
										printf("\t\t\t请输入修改后英语成绩：");
										scanf("%f",&p->next->score[2]);
										break;
										} 
									case 52:
										{ 
										printf("\t\t\t请输入修改后专业课成绩：");
										scanf("%f",&p->next->score[3]);
										break;
										} 
								}
							printf("\t\t\t修改成功\n"); 
							}
				}
				system("cls");
				welcome();
				}
			else
				p=p->next; 
		}
	printf("\t\t\t无此数据,查找失败\n");
	return 0;
}
int main()
{
	welcome();
	header->next=NULL;
}
