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
		struct  student *q=(struct student *)malloc(sizeof(struct student));//������ 
		printf("\t\t\t��������(6λ):");
		scanf("%s",q->bianhao);
		char *b;
		while(strlen(q->bianhao)!=6)
		{
			printf("\t\t\t1��ʽ��������������:");
			scanf("%s",q->bianhao);
		 } 
		b=q->bianhao;
		printf("\t\t\t��Ȱ�����������Լ����׽�ɶ\n");
		printf("\t\t\t����������:");
		scanf("%s",q->name);
		char *a;
		a=q->name;
		printf("\t\t\t������ɼ������� ��ѧ Ӣ�� רҵ�Σ�:");
		scanf("%f %f %f %f",&q->score[0],&q->score[1],&q->score[2],&q->score[3]);
		geshu++;
		q->next=NULL;
		p->next=q;
		p=q;

}
	printf("\t\t\t�������!\n");
}
void chakanall()
{
	S *p=header;
	printf("\n����\t���\t���ĳɼ�\t��ѧ�ɼ�\tӢ��ɼ�\tרҵ�γɼ�\n");
	while(p->next!=NULL)
		{
			printf("%s\t%s\t%f\t%f\t%f\t%f\n",p->next->name,p->next->bianhao,p->next->score[0],p->next->score[1],p->next->score[2],p->next->score[3]);
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
				printf("\n����\t���\t���ĳɼ�\t��ѧ�ɼ�\tӢ��ɼ�\tרҵ�γɼ�\n");
				printf("%s\t%s\t%s\t%f\t%f\t%f\t%f\n",p->next->name,p->next->bianhao,p->next->score[0],p->next->score[1],p->next->score[2],p->next->score[3]);
				return 0;
				}
			else
				p=p->next; 
		}
	printf("\t\t\t�޴�����,����ʧ�ܣ���������ɼ�δ¼��");
}
void welcome()
{

	printf("		*********************************************************\n"); 
	printf("		*            ��ӭʹ��ѧ���ɼ�����ϵͳ   	        *\n");
	printf("		*********************************************************\n");
	printf("		*	  	   ѡ�����б�		 		*\n");
	printf("		*********************************************************\n");
	printf("		*		1.¼��ѧ����Ϣ		               	*\n");
	printf("		*		2.��ӡѧ����Ϣ	             		*\n");
	printf("		*		3.����ѧ����Ϣ		             	*\n");
	printf("		*		4.�޸�ѧ����Ϣ		            	*\n");
	printf("		*		5.ɾ��ѧ����Ϣ		             	*\n");
	printf("		*		0.�˳�ϵͳ				*\n");
	printf("		*********************************************************\n");
	printf("\t\t\t�밴����\n"); 
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
	printf("\t\t\t��������Ҫ�޸ĵ�ѧ�����:");
	char a[20];
	scanf("%s",a);
	while(NULL != p->next)
		{
			if(strcmp(p->next->bianhao,a)==0)
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
							printf("\t\t\t�������޸ĺ��ţ�");
							scanf("%s",p->next->bianhao);
							while(strlen(p->next->bianhao)!=6)
							{				
							printf("\t\t\t��Ÿ�ʽ��������������:\n");
							scanf("%s",p->next->bianhao);
		 					} 
							printf("\t\t\t�޸ĳɹ�\n"); 
							break; 
							}
						case 51:
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
				welcome();
				}
			else
				p=p->next; 
		}
	printf("\t\t\t�޴�����,����ʧ��\n");
	return 0;
}
int main()
{
	welcome();
	header->next=NULL;
}
