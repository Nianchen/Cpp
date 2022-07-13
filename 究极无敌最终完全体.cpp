#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<windows.h>
#include<conio.h>
int geshu=0; 
int n,j,m;
float jige1=0,jige2=0,jige3=0,jige4=0;
char gly[20]="chenxu";
char mima[20]="2216092064";
FILE *fp;
void denglu();
void chabanji();
void paixu();
int welcome1();
int welcome2();
void xmchachong(char *a);
void xhchachong(char *a);
void xueshengdenglu();
void jigelv();

typedef struct stu{
	char xuehao[16];
	char name[20];
	char banji[20]; 
	float score[4];
	struct stu *next;
}S;
struct stu *header=(S*)malloc(sizeof(S));
void jiaohuan(int *p,int *q)
{
	int a;
	if(*p>=*q)
	{
	a=*p;
	*p=*q;
	*q=a;
	}
}
void color(short x)	//自定义函根据参数改变颜色 
{
    if(x>=0 && x<=15)//参数在0-15的范围颜色
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);	//只有一个参数，改变字体颜色 
    else//默认的颜色白色
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void laoshidenglu()
{
	S *p=header;
	printf("\n\n\n\n");
	printf("\t\t\t\t请输入管理员账号以及密码登录\n");
	printf("\t\t\t\t账号：");
	char a[16];
	scanf("%s",&a); 
	printf("\t\t\t\t密码：");
	char b[11];
	int temp;
	int i=0;
	while(1)
	{
		temp=getch();
		if(temp!=8&&temp!=13)
		{
			b[i]=temp;
			printf("*");
			i++;
		}
		else if(temp==8)
		{
				printf("\b \b");
				b[i]='\0';
				i--;
		}
		else if(temp==13)
		{
			 if(i==0)
			 {
			   printf("\t\t\t密码不能为空!\n请输入密码:\n");
			   temp=getch();
			 }
			 else
			 {
				b[i]='\0';
				printf("\n");
				break;
			 }
		}
	}
			if(strcmp(gly,a)==0)
				{
				if(strcmp(mima,b)==0)
					{
						system("cls");
						welcome1();
					}
				else
					{
					printf("\t\t\t\t输入错误，你最好好好想想你是什么东西\n\n\n");
					denglu();
					}
				}
			else
				{
				printf("\t\t\t\t输入错误，你最好好好想想你是什么东西\n\n\n");
				denglu();
				}	
	printf("\n\t\t\t\t输入错误，你最好好好想想你是什么东西");
	laoshidenglu();
	
}
void xueshengdenglu()
{
	S *p=header;
		while(geshu==0)
	{
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t\t\t库中无信息，请等待录入");
		printf("\n\n\n");
		denglu();
	}
	printf("\n\n\n\n");
	printf("\t\t\t\t请输入姓名以及学号登录\n");
	printf("\t\t\t\t姓名：");
	char a[16];
	scanf("%s",&a); 
	printf("\t\t\t\t学号：");
	char b[16];
	scanf("%s",&b);
	while(p->next!=NULL)
		{
			if(strcmp(p->next->name,a)==0)
				{
				if(strcmp(p->next->xuehao,b)==0)
					{
						system("cls");
						welcome2();
					}
				else
					{
					printf("\t\t\t\t输入错误或者信息未录入\n\n\n");
					denglu();
					}
				}
			else
				{ 
				printf("\t\t\t\t输入错误或者信息未录入\n\n\n");
				denglu();
				}
				
			p=p->next;
		} 
		printf("\t\t\t\t输入错误或者信息未录入\n\n\n");
		denglu();
	
}
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
		struct  stu *q=(struct stu *)malloc(sizeof(struct stu));//开辟新 
		printf("\t\t\t请输入学号(5位):");
		scanf("%s",q->xuehao);
		char *b;
		while(strlen(q->xuehao)!=5)
		{
			printf("\t\t\t学号格式错误，请重新输入:");
			scanf("%s",q->xuehao);
		 } 
		b=q->xuehao;
		xhchachong(b);
		printf("\t\t\t我劝你认真想想自己到底叫啥\n");
		printf("\t\t\t请输入名字:");
		scanf("%s",q->name);
		char *a;
		a=q->name;
		xmchachong(a);
		printf("\t\t\t请输入班级:");
		scanf("%s",q->banji);
		printf("\t\t\t请输入成绩（语文 数学 英语 专业课）:");
		scanf("%f %f %f %f",&q->score[0],&q->score[1],&q->score[2],&q->score[3]);
		geshu++;
		q->next=NULL;
		p->next=q;
		p=q;
		fp=fopen("D://shuju.txt","a"); 
		char *str = q->name;
		char *str1 = q->xuehao;
		fprintf(fp,"\n");
		fputs(str, fp);
		fprintf(fp,"\t");
		fputs(str1, fp);
		fprintf(fp,"\n");
		fclose(fp);
}
	printf("\t\t\t创建完成!\n");
	fclose(fp);
}
void chakanall()
{
	S *p=header;
	printf("\n姓名\t学号\t班级\t语文成绩\t数学成绩\t英语成绩\t专业课成绩\n");
	while(1)
		{
			printf("%s\t%s\t%s\t%f\t%f\t%f\t%f\n",p->next->name,p->next->xuehao,p->next->banji,p->next->score[0],p->next->score[1],p->next->score[2],p->next->score[3]);
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
				printf("\n姓名\t学号\t班级\t语文成绩\t数学成绩\t英语成绩\t专业课成绩\n");
				printf("%s\t%s\t%s\t%f\t%f\t%f\t%f\n",p->next->name,p->next->xuehao,p->next->banji,p->next->score[0],p->next->score[1],p->next->score[2],p->next->score[3]);
				return 0;
				}
			else
				p=p->next; 
		}
	printf("\t\t\t无此数据,查找失败，输入错误或成绩未录入");
}
int change()
{
	S *p=header;
	printf("\t\t\t请输入你要修改的学生学号:");
	char a[20];
	scanf("%s",a);
	while(NULL != p->next)
		{
			if(strcmp(p->next->xuehao,a)==0)
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
							printf("\t\t\t请输入修改后学号：");
							scanf("%s",p->next->xuehao);
							while(strlen(p->next->xuehao)!=5)
							{				
							printf("\t\t\t学号格式错误，请重新输入:\n");
							scanf("%s",p->next->xuehao);
		 					} 
							printf("\t\t\t修改成功\n"); 
							break; 
							}
						case 51:
							{
							printf("\t\t\t请输入修改后班级：");
							scanf("%s",p->next->banji);
							printf("\t\t\t修改成功\n"); 
							break; 
							}
						case 52:
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
				welcome1();
				}
			else
				p=p->next; 
		}
	printf("\t\t\t无此数据,查找失败\n");
	return 0;
}
int shan()
{
	S *p=header;
	S *prev;
	printf("\t\t\t请输入你要删除的学生姓名:");
	char a[20];
	scanf("%s",a);
	while(NULL != p->next)
		{
			if(strcmp(p->next->name,a)==0)
				{
				printf("\t\t\t查找成功:%s",p->next->name);
				prev=p;
				p=p->next;
				prev->next=p->next;
				free(p);
				printf("\t\t\t删除成功\n");
				geshu--;
				welcome1();			
				}
			else
				p=p->next; 
		}
	printf("\t\t\t无此数据,删除失败\n");
	welcome1();	
}
int welcome1()
{
	int i=100;
	while(i)
	{
    SYSTEMTIME sys; 
    GetLocalTime( &sys ); 
    printf( "%4d/%02d/%02d %02d:%02d:%02d.%03d 星期%1d\n",sys.wYear,sys.wMonth,sys.wDay,sys.wHour,sys.wMinute, sys.wSecond,sys.wMilliseconds,sys.wDayOfWeek); 
	printf("\n\n\n\n\n");
	printf("                             当前共有%d名学生***********************\n",geshu);	
	printf("                             ***************************************\n");
	printf("                             *           创建学生信息请选择: 1     *\n");
	printf("                             *           修改学生信息请选择: 2     *\n");
	printf("                             *           查找学生信息请选择: 3     *\n");
	printf("                             *           删除学生信息请选择: 4     *\n");
	printf("                             *           全部学生信息请选择: 5     *\n");
	printf("                             *           返回上一级请选择: 6       *\n");
	printf("                             *           退出程序请选择: 0         *\n");
	printf("                             ***************************************\n");
	printf("\t\t\t请按键：\n"); 
	i=getch();
	while(i<48||i>54)
		{
			system("cls");
			welcome1();
		}
	switch(i)
		{
			case 49:
				set();break;
			case 50:
				change();break;
			case 51:
				chazhao();break;
			case 52:
				shan();break;
			case 53:
				chakanall();break;
			case 54:
				system("cls");denglu();break; 
			case 48:
			 exit(0);break;
		}
	} 
}
int welcome2()
{
	
	//system("cls");
	int i=100;
	while(i)
	{
	printf("\n\n\n\n\n");
	printf("                             ***************登录成功****************\n");
	printf("                             ***************************************\n");
	printf("                             *           查找学生成绩请选择: 1     *\n");
	printf("                             *           全部学生成绩请选择: 2     *\n");
	printf("                             *           查看学生排行请选择: 3     *\n");
	printf("                             *           查看成绩及格率请选择: 4   *\n");
	printf("                             *           查看本班学生列表请选择: 5 *\n");
	printf("                             *           返回上一级请选择: 6       *\n");
	printf("                             *           退出程序请选择: 0         *\n");
	printf("                             ***************************************\n");
	printf("\t\t\t\t请按键："); 
	i=getch();
	while(i<48||i>54)
		{
			printf("\n\t\t\t请重新按键：\n");
			i=getch();
		}
	switch(i)
		{
			case 49:
				chazhao();break;
			case 50:
				chakanall();break;
			case 51:
				paixu();break;
			case 52:
				jigelv();break;
			case 53:
				chabanji();break;
			case 54:
				system("cls");denglu();break; 
			case 48:
				exit(0);break;
		}
}
}
void denglu()
{
	int i=100; 
	printf("                             *_______________________________________*\n");
	printf("                             |***************************************|\n");
color(4);	printf("                             |*******欢迎光临BUG成绩管理系统*********|\n");
color(16);	printf("                             |***************************************|\n");
	printf("                             |***************************************|\n");
	printf("                             |*         学生请选择：1 (〃￣︶￣)    *|\n"); 
	printf("                             |*         老师请选择：2 (o゜▽゜)o☆  *|\n");
	printf("                             |*         啥也不是退了吧！！！        *|\n"); 
	printf("                             |***************************************|\n");
	printf("                             *_______________________________________*\n");
	printf("\t\t\t请按键："); 
	i=getch();
	while(i<49||i>50)
		{
			printf("\n\t\t\t请重新按键：\n");
			i=getch();
		}
	switch(i)
		{
			case 49:
				system("cls");xueshengdenglu();break;
			case 50:
				system("cls");laoshidenglu();break;
			default :
				system("cls");denglu();
		}
}
void paixu()
{
	int i;
	S *p=header;
	printf("\n                             ***************************************\n");
	printf("                             ***************请选择排序方式：********\n");
	printf("                             ***************按语文成绩排序：1*******\n");
	printf("                             ***************按数学成绩排序：2*******\n");
	printf("                             ***************按英语成绩排序：3*******\n");
	printf("                             ***************按专业成绩排序：4*******\n");
	printf("                             ***************************************\n");
	printf("                             请按键："); 
	n=getch();
	while(i<49||i>52)
		{
			printf("\n\t\t\t请重新按键：\n");
			i=getch();
		}
	switch(n)
	{
			case 49:
			{
			int pai[geshu];
			for( i=0;i<geshu;i++)
				{
					pai[i]=p->next->score[0];
					if(p->next!=NULL)
						p=p->next;
					else
						break;
				}
			for(i=0;i<geshu-1;i++)
				{
				for(j=0;j<geshu-1-i;j++)
					if(pai[j]>=pai[j+1])
					{
					m=pai[j];
					pai[j]=pai[j+1];
					pai[j+1]=m;
					}
				}
			printf("\t\t姓名\t语文成绩\n");
			for(i=0;i<geshu;i++)
			{
			p=header;
			while(p->next!=NULL)
				{
					if(p->next->score[0]==pai[i])
						printf("\t\t\t%s\t%f\n",p->next->name,p->next->score[0]);
						p=p->next;		
				}
			}
			printf("\t\t\t输出完成！按任意键返回");
			int c;
			c=getch();
			if(c)
			 	welcome2();
			}
			case 50:
			{
			int pai[geshu];
			for( i=0;i<geshu;i++)
				{
					pai[i]=p->next->score[1];
					if(p->next!=NULL)
						p=p->next;
					else
						break;
				}
			for(i=0;i<geshu-1;i++)
				{
				for(j=0;j<geshu-1-i;j++)
					if(pai[j]>=pai[j+1])
					{
					m=pai[j];
					pai[j]=pai[j+1];
					pai[j+1]=m;
					}
				}
			printf("\t\t姓名\t数学成绩\n");
			for(i=0;i<geshu;i++)
			{
			p=header;
			while(p->next!=NULL)
				{
					if(p->next->score[1]==pai[i])
						printf("\t\t%s\t%f\n",p->next->name,p->next->score[1]);
						p=p->next;		
				}
			}
				printf("\t\t\t输出完成！按任意键返回");
			int c;
			c=getch();
			if(c)
			 	welcome2();
			}
			case 51:
			{
			int pai[geshu];
			for( i=0;i<geshu;i++)
				{
					pai[i]=p->next->score[2];
					if(p->next!=NULL)
						p=p->next;
					else
						break;
				}
			for(i=0;i<geshu-1;i++)
				{
				for(j=0;j<geshu-1-i;j++)
					if(pai[j]>=pai[j+1])
					{
					m=pai[j];
					pai[j]=pai[j+1];
					pai[j+1]=m;
					}
				}
			printf("\t\t姓名\t英语成绩\n");
			for(i=0;i<geshu;i++)
			{
			p=header;
			while(p->next!=NULL)
				{
					if(p->next->score[2]==pai[i])
						printf("\t\t%s\t%f\n",p->next->name,p->next->score[2]);
						p=p->next;		
				}
			}
				printf("\t\t\t输出完成！按任意键返回");
			int c;
			c=getch();
			if(c)
			 	welcome2();
			}
			case 52:
			{
			int pai[geshu];
			for( i=0;i<geshu;i++)
				{
					pai[i]=p->next->score[3];
					if(p->next!=NULL)
						p=p->next;
					else
						break;
				}
			for(i=0;i<geshu-1;i++)
				{
				for(j=0;j<geshu-1-i;j++)
					if(pai[j]>=pai[j+1])
					{
					m=pai[j];
					pai[j]=pai[j+1];
					pai[j+1]=m;
					}
				}
			printf("\t\t姓名\t专业成绩\n");
			for(i=0;i<geshu;i++)
			{
			p=header;
			while(p->next!=NULL)
				{
					if(p->next->score[3]==pai[i])
						printf("\t\t%s\t%f\n",p->next->name,p->next->score[3]);
						p=p->next;		
				}
			}
			printf("\t\t\t输出完成！按任意键返回");
			int c;
			c=getch();
			if(c)
			 	welcome2();
			}
	}
}

void xmchachong(char *a)
{
	S *p=header;
	while(p->next!=NULL)
		{
		if(strcmp(p->next->name,a)==0)
			{
				printf("\t\t\t姓名已存在，请重新输入！\n");
				scanf("%s",&p->next->name);
			}
			else
				p=p->next;
		}	
}
void xhchachong(char *a)
{
	S *p=header;
	while(p->next!=NULL)
		{
		if(strcmp(p->next->xuehao,a)==0)
			{
				printf("\t\t\t学号已存在，请重新输入！\n");
				scanf("%s",&p->next->xuehao);
			}
			else
				p=p->next;
		}	
}
void jigelv()
{
	S *p=header;
	printf("\n语文及格率\t数学及格率\t英语及格率\t专业课及格率\n");
	while(p->next!=NULL)
		{
			if(p->next->score[0]>=60)
				{
					jige1++;
				}
			if(p->next->score[1]>=60)
				{
					jige2++;
				}
			if(p->next->score[2]>=60)
				{
					jige3++;
				}
			if(p->next->score[3]>=60)
				{
					jige4++;
				}
			p=p->next;
		}
	printf("%.2f%\t\t%.2f%\t%.2f%\t%.2f%\n",jige1/geshu,jige2/geshu,jige3/geshu,jige4/geshu);
	welcome2();
} 
void chabanji()
{
	S *p=header;
	printf("\t\t\t请输入需要查询的班级：");
	char a[16];
	scanf("%s",&a);
	while(p->next!=NULL)
		{
			printf("\t\t\t姓名\t班级\n"); 
			if(strcmp(p->next->banji,a)==0)
				{
					printf("\t\t\t%s\t\n",p->next->name,p->next->banji);
				}
			p=p->next;
		}
	welcome2();
}
int main()
{
	header->next=NULL;
	denglu();
}

