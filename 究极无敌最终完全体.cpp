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
void color(short x)	//�Զ��庯���ݲ����ı���ɫ 
{
    if(x>=0 && x<=15)//������0-15�ķ�Χ��ɫ
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);	//ֻ��һ���������ı�������ɫ 
    else//Ĭ�ϵ���ɫ��ɫ
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void laoshidenglu()
{
	S *p=header;
	printf("\n\n\n\n");
	printf("\t\t\t\t���������Ա�˺��Լ������¼\n");
	printf("\t\t\t\t�˺ţ�");
	char a[16];
	scanf("%s",&a); 
	printf("\t\t\t\t���룺");
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
			   printf("\t\t\t���벻��Ϊ��!\n����������:\n");
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
					printf("\t\t\t\t�����������úú���������ʲô����\n\n\n");
					denglu();
					}
				}
			else
				{
				printf("\t\t\t\t�����������úú���������ʲô����\n\n\n");
				denglu();
				}	
	printf("\n\t\t\t\t�����������úú���������ʲô����");
	laoshidenglu();
	
}
void xueshengdenglu()
{
	S *p=header;
		while(geshu==0)
	{
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t\t\t��������Ϣ����ȴ�¼��");
		printf("\n\n\n");
		denglu();
	}
	printf("\n\n\n\n");
	printf("\t\t\t\t�����������Լ�ѧ�ŵ�¼\n");
	printf("\t\t\t\t������");
	char a[16];
	scanf("%s",&a); 
	printf("\t\t\t\tѧ�ţ�");
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
					printf("\t\t\t\t������������Ϣδ¼��\n\n\n");
					denglu();
					}
				}
			else
				{ 
				printf("\t\t\t\t������������Ϣδ¼��\n\n\n");
				denglu();
				}
				
			p=p->next;
		} 
		printf("\t\t\t\t������������Ϣδ¼��\n\n\n");
		denglu();
	
}
void set()
{
	S *p=header;
	int n;
	printf("\t\t\t����������Ҫ��������ѧ����Ϣ:");
	scanf("%d",&n);
	while(n<=0)
	{
		printf("\t\t\t��ʽ����,����������:");
		scanf("%d",&n);
	}
	while(p->next!=NULL)
    {
    	p=p->next;
	} 	
	while(n--)
{
		struct  stu *q=(struct stu *)malloc(sizeof(struct stu));//������ 
		printf("\t\t\t������ѧ��(5λ):");
		scanf("%s",q->xuehao);
		char *b;
		while(strlen(q->xuehao)!=5)
		{
			printf("\t\t\tѧ�Ÿ�ʽ��������������:");
			scanf("%s",q->xuehao);
		 } 
		b=q->xuehao;
		xhchachong(b);
		printf("\t\t\t��Ȱ�����������Լ����׽�ɶ\n");
		printf("\t\t\t����������:");
		scanf("%s",q->name);
		char *a;
		a=q->name;
		xmchachong(a);
		printf("\t\t\t������༶:");
		scanf("%s",q->banji);
		printf("\t\t\t������ɼ������� ��ѧ Ӣ�� רҵ�Σ�:");
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
	printf("\t\t\t�������!\n");
	fclose(fp);
}
void chakanall()
{
	S *p=header;
	printf("\n����\tѧ��\t�༶\t���ĳɼ�\t��ѧ�ɼ�\tӢ��ɼ�\tרҵ�γɼ�\n");
	while(1)
		{
			printf("%s\t%s\t%s\t%f\t%f\t%f\t%f\n",p->next->name,p->next->xuehao,p->next->banji,p->next->score[0],p->next->score[1],p->next->score[2],p->next->score[3]);
			p=p->next;
			if(p->next==NULL)
			break;
		}
	printf("������!\n");
}
int chazhao()
{
	S *p=header;
	printf("\t\t\t��������Ҫ���ҵ�ѧ������:");
	char a[20];
	scanf("%s",a);
	while(NULL != p->next)
		{
			if(strcmp(p->next->name,a)==0)
				{
				printf("\t\t���ҳɹ�\n");
				printf("\n����\tѧ��\t�༶\t���ĳɼ�\t��ѧ�ɼ�\tӢ��ɼ�\tרҵ�γɼ�\n");
				printf("%s\t%s\t%s\t%f\t%f\t%f\t%f\n",p->next->name,p->next->xuehao,p->next->banji,p->next->score[0],p->next->score[1],p->next->score[2],p->next->score[3]);
				return 0;
				}
			else
				p=p->next; 
		}
	printf("\t\t\t�޴�����,����ʧ�ܣ���������ɼ�δ¼��");
}
int change()
{
	S *p=header;
	printf("\t\t\t��������Ҫ�޸ĵ�ѧ��ѧ��:");
	char a[20];
	scanf("%s",a);
	while(NULL != p->next)
		{
			if(strcmp(p->next->xuehao,a)==0)
				{
				printf("\t\t���ҳɹ�:%s\n",p->next->name);
				printf("                             ***************************************\n");
				printf("                             *             �޸�������1             *\n");
				printf("                             *             �޸�ѧ�ţ�2             *\n");
				printf("                             *             �޸İ༶��3             *\n");
				printf("                             *             �޸ĳɼ���4             *\n");
				printf("                             *             ������һ����5           *\n");
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
							printf("\t\t\t�������޸ĺ�������");
							scanf("%s",p->next->name);
							printf("\t\t\t�޸ĳɹ�\n"); 
							break; 
							}
						case 50:
							{
							printf("\t\t\t�������޸ĺ�ѧ�ţ�");
							scanf("%s",p->next->xuehao);
							while(strlen(p->next->xuehao)!=5)
							{				
							printf("\t\t\tѧ�Ÿ�ʽ��������������:\n");
							scanf("%s",p->next->xuehao);
		 					} 
							printf("\t\t\t�޸ĳɹ�\n"); 
							break; 
							}
						case 51:
							{
							printf("\t\t\t�������޸ĺ�༶��");
							scanf("%s",p->next->banji);
							printf("\t\t\t�޸ĳɹ�\n"); 
							break; 
							}
						case 52:
							{
							printf("\t\t\t������Ҫ�޸ĵĿ�Ŀ��\n");
							printf("                             ***************************************\n");
							printf("                             *             �޸����ģ�1             *\n");
							printf("                             *             �޸���ѧ��2             *\n");
							printf("                             *             �޸�Ӣ�3             *\n");
							printf("                             *             �޸�רҵ�Σ�4           *\n");
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
										printf("\t\t\t�������޸ĺ����ĳɼ���");
										scanf("%f",&p->next->score[0]);
										break;
										} 
									case 50:
										{ 
										printf("\t\t\t�������޸ĺ���ѧ�ɼ���");
										scanf("%f",&p->next->score[1]);
										break;
										} 
									case 51:
										{ 
										printf("\t\t\t�������޸ĺ�Ӣ��ɼ���");
										scanf("%f",&p->next->score[2]);
										break;
										} 
									case 52:
										{ 
										printf("\t\t\t�������޸ĺ�רҵ�γɼ���");
										scanf("%f",&p->next->score[3]);
										break;
										} 
								}
							printf("\t\t\t�޸ĳɹ�\n"); 
							}
				}
				system("cls");
				welcome1();
				}
			else
				p=p->next; 
		}
	printf("\t\t\t�޴�����,����ʧ��\n");
	return 0;
}
int shan()
{
	S *p=header;
	S *prev;
	printf("\t\t\t��������Ҫɾ����ѧ������:");
	char a[20];
	scanf("%s",a);
	while(NULL != p->next)
		{
			if(strcmp(p->next->name,a)==0)
				{
				printf("\t\t\t���ҳɹ�:%s",p->next->name);
				prev=p;
				p=p->next;
				prev->next=p->next;
				free(p);
				printf("\t\t\tɾ���ɹ�\n");
				geshu--;
				welcome1();			
				}
			else
				p=p->next; 
		}
	printf("\t\t\t�޴�����,ɾ��ʧ��\n");
	welcome1();	
}
int welcome1()
{
	int i=100;
	while(i)
	{
    SYSTEMTIME sys; 
    GetLocalTime( &sys ); 
    printf( "%4d/%02d/%02d %02d:%02d:%02d.%03d ����%1d\n",sys.wYear,sys.wMonth,sys.wDay,sys.wHour,sys.wMinute, sys.wSecond,sys.wMilliseconds,sys.wDayOfWeek); 
	printf("\n\n\n\n\n");
	printf("                             ��ǰ����%d��ѧ��***********************\n",geshu);	
	printf("                             ***************************************\n");
	printf("                             *           ����ѧ����Ϣ��ѡ��: 1     *\n");
	printf("                             *           �޸�ѧ����Ϣ��ѡ��: 2     *\n");
	printf("                             *           ����ѧ����Ϣ��ѡ��: 3     *\n");
	printf("                             *           ɾ��ѧ����Ϣ��ѡ��: 4     *\n");
	printf("                             *           ȫ��ѧ����Ϣ��ѡ��: 5     *\n");
	printf("                             *           ������һ����ѡ��: 6       *\n");
	printf("                             *           �˳�������ѡ��: 0         *\n");
	printf("                             ***************************************\n");
	printf("\t\t\t�밴����\n"); 
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
	printf("                             ***************��¼�ɹ�****************\n");
	printf("                             ***************************************\n");
	printf("                             *           ����ѧ���ɼ���ѡ��: 1     *\n");
	printf("                             *           ȫ��ѧ���ɼ���ѡ��: 2     *\n");
	printf("                             *           �鿴ѧ��������ѡ��: 3     *\n");
	printf("                             *           �鿴�ɼ���������ѡ��: 4   *\n");
	printf("                             *           �鿴����ѧ���б���ѡ��: 5 *\n");
	printf("                             *           ������һ����ѡ��: 6       *\n");
	printf("                             *           �˳�������ѡ��: 0         *\n");
	printf("                             ***************************************\n");
	printf("\t\t\t\t�밴����"); 
	i=getch();
	while(i<48||i>54)
		{
			printf("\n\t\t\t�����°�����\n");
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
color(4);	printf("                             |*******��ӭ����BUG�ɼ�����ϵͳ*********|\n");
color(16);	printf("                             |***************************************|\n");
	printf("                             |***************************************|\n");
	printf("                             |*         ѧ����ѡ��1 (�������)    *|\n"); 
	printf("                             |*         ��ʦ��ѡ��2 (o�b���b)o��  *|\n");
	printf("                             |*         ɶҲ�������˰ɣ�����        *|\n"); 
	printf("                             |***************************************|\n");
	printf("                             *_______________________________________*\n");
	printf("\t\t\t�밴����"); 
	i=getch();
	while(i<49||i>50)
		{
			printf("\n\t\t\t�����°�����\n");
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
	printf("                             ***************��ѡ������ʽ��********\n");
	printf("                             ***************�����ĳɼ�����1*******\n");
	printf("                             ***************����ѧ�ɼ�����2*******\n");
	printf("                             ***************��Ӣ��ɼ�����3*******\n");
	printf("                             ***************��רҵ�ɼ�����4*******\n");
	printf("                             ***************************************\n");
	printf("                             �밴����"); 
	n=getch();
	while(i<49||i>52)
		{
			printf("\n\t\t\t�����°�����\n");
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
			printf("\t\t����\t���ĳɼ�\n");
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
			printf("\t\t\t�����ɣ������������");
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
			printf("\t\t����\t��ѧ�ɼ�\n");
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
				printf("\t\t\t�����ɣ������������");
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
			printf("\t\t����\tӢ��ɼ�\n");
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
				printf("\t\t\t�����ɣ������������");
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
			printf("\t\t����\tרҵ�ɼ�\n");
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
			printf("\t\t\t�����ɣ������������");
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
				printf("\t\t\t�����Ѵ��ڣ����������룡\n");
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
				printf("\t\t\tѧ���Ѵ��ڣ����������룡\n");
				scanf("%s",&p->next->xuehao);
			}
			else
				p=p->next;
		}	
}
void jigelv()
{
	S *p=header;
	printf("\n���ļ�����\t��ѧ������\tӢ�Ｐ����\tרҵ�μ�����\n");
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
	printf("\t\t\t��������Ҫ��ѯ�İ༶��");
	char a[16];
	scanf("%s",&a);
	while(p->next!=NULL)
		{
			printf("\t\t\t����\t�༶\n"); 
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

