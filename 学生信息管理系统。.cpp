#define _CRT_SECURE_NO_WARNINGS 1//ͷ�ļ�
#include<stdio.h>	
#include<stdlib.h>	
#include<string.h>
int n=0,m=0;

//��������
void tianjia();
void xiugai();
void find1();
void find2();
void dele1();
void dele2();
void all();
void shuoming();
void caidan();
void tuichu();

//���������գ�Ƕ�׵Ľṹ��ṹ��
struct Birth
{
	int year;//���
	int month;//�·�
	int day;//����
};

//�ṹ��
struct someone
{
	char id[51];//ѧ��
	char name[51];//����
	int  age;//����
	char sex[20];//�Ա�
	char phonenumer[51];//�绰����
	struct Birth birth;//����������
	char address[51];//��ַ
	char email[51];//�����ʼ�
}som[100];



//1.���
void tianjia()
{
	system("cls");  
	int i;
	printf("���ӵ�ѧ����Ϊ:\n");
	scanf("%d",&m);
	if(m>0)
	{
		for(i=0;i<=m+n-1;i++)
		{
		printf("��%dλѧ����ѧ��Ϊ:\n",i+1);
		scanf("%s",som[i].id);
		printf("��%dλѧ��������Ϊ:\n",i+1);
		scanf("%s",som[i].name);
		printf("��%dλѧ��������Ϊ:\n",i+1);
		scanf("%d",&som[i].age);
		printf("��%dλѧ�����Ա�Ϊ:\n",i+1);
		scanf("%s",&som[i].sex);
		printf("��%dλѧ���ĵ绰����Ϊ:\n",i+1);
		scanf("%s",som[i].phonenumer);
		printf("��%dλѧ���ĳ������Ϊ:\n",i+1);
		scanf("%d",&som[i].birth.year );
		printf("��%dλѧ���ĳ����·�Ϊ:\n",i+1);
		scanf("%d",&som[i].birth.month);
		printf("��%dλѧ���ĳ�����Ϊ:\n",i+1);
		scanf("%d",&som[i].birth.day);
		printf("��%dλѧ���ĵ�ַΪ:\n",i+1);
		scanf("%s",som[i].address);
		printf("��%dλѧ���ĵ����ʼ�Ϊ:\n",i+1);
		scanf("%s",som[i].email);
		}
	}
	else
	{
		printf("m must > 0.\n");
	}
	n=n+m;
	printf("�ɹ���\n");	
    caidan();		
}



//2.�޸�
void xiugai()
{
	int i,takein,s4,s7,ss7,sss7;
	char good,sex1[20],s1[51],s2[51],s3[51],s5[51],s6[51];
	printf("��Ҫ�޸ĵ�ѧ����ѧ����:\n");
	scanf("%s",s1);
	for(i=0;i<n;i++)
	{
		if(strcmp(som[i].id,s1)==0)
		{
			printf("     1.������      \n");
			printf("     2.������      \n");
			printf("     3.���Ա�      \n");
			printf("     4.�ĵ绰      \n");
			printf("     5.�ĳ���������\n");
			printf("     6.�ĵ�ַ      \n");
			printf("     7.�ĵ����ʼ�  \n");			
			printf("     8.�˳�        \n");
			printf("��ѡ��Ҫ�޸ĵ���Ϣ:\n");
			scanf("%d",&takein);
			switch(takein)
			{
			case 1:
				printf("�µ�����Ϊ:\n");
				scanf("%s",s2);
				strcpy(som[i].name,s2);
				printf("�Ƿ�����޸ģ�(y or n)\n");
				scanf("%s",&good);
				if(good=='y')
				{
					xiugai();
				}
				if(good=='n')
				{caidan();}
				break;
			case 2:
				printf("�µ�����Ϊ:\n");
				scanf("%d",&s4); 
				som[i].age=s4; 
				printf("�Ƿ�����޸ģ�(y or n)\n");
				scanf("%s",&good);
				if(good=='y')
				{
					xiugai();
				}
				if(good=='n')
				{caidan();}
				break;
			case 3:
				printf("�µ��Ա�Ϊ:\n");
				scanf("%s",&sex1);
				strcpy(som[i].sex,sex1); 
				printf("�Ƿ�����޸ģ�(y or n)\n");
				scanf("%s",&good);
				if(good=='y')
				{
					xiugai();
				}

				if(good=='n') 
				{caidan();}
				break;
			case 4:
				printf("�µĵ绰Ϊ:\n");
				scanf("%s",s3);
				strcpy(som[i].phonenumer,s3); 
				printf("�Ƿ�����޸ģ�(y or n)\n");
				scanf("%s",&good);
				if(good=='y')
				{
					xiugai();
				}
				if(good=='n')
				{caidan();}
				break;
			case 5:
				printf("�µĳ������Ϊ:\n");
				scanf("%d",&s7);
				som[i].birth.year=s7; 
				printf("�µĳ����·�Ϊ:\n");
				scanf("%d",&ss7);
				som[i].birth.month=ss7; 
				printf("�µĳ�����Ϊ:\n");
				scanf("%d",&sss7);
				som[i].birth.day=sss7;  
				printf("�Ƿ�����޸ģ�(y or n)\n");
				scanf("%s",&good);
				if(good=='y')
				{
					xiugai();
				}
				if(good=='n')
				{caidan();}
				break;
			case 6:
				printf("�µĵ�ַΪ:\n");
				scanf("%s",s5);
				strcpy(som[i].address,s5);
				printf("�Ƿ�����޸ģ�(y or n)\n");
				scanf("%s",&good);
				if(good=='y')
				{
					xiugai();
				}
				if(good=='n')
				{caidan();}
				break;
			case 7:
				printf("�µĵ����ʼ�Ϊ:\n");
				scanf("%s",s6);
				strcpy(som[i].email,s6);
				printf("�Ƿ�����޸ģ�(y or n)\n");
				scanf("%s",&good);
				if(good=='y')
				{
					xiugai();
				}
				if(good=='n')
				{caidan();}
				break;
		    case 8: return;
			default:printf("��ѡ��:\n");
			}
			printf("�ɹ���\n");
		}
		else
			printf("�����ڣ�");
	}
}



//3.��ѧ�Ų���ѧ����Ϣ
void find1()
{
	int i,b;
	char s1[51];
	printf("     1.����ѧ��       \n");
	printf("     2.�˳�         \n");
	printf("��ѡ��:");
	scanf("%d",&b);
	switch(b)
	{
	case 1:
		printf("ѧ��Ϊ:\n");
		scanf("%s",s1);
		for(i=0;i<n;i++)
		{
		     if(strcmp(s1,som[i].id)==0)
			 {
		        printf("|ѧ��ѧ��|ѧ������|����|  �Ա�  |   �绰����  |   ����������  | ��ַ  |  �����ʼ�   \n");	
			    printf("   %s\t    %s\t    %d\t   %s\t  %s\t %d��%d��%d��\t %s\t %s\n",som[i].id,som[i].name,som[i].age,som[i].sex,som[i].phonenumer,som[i].birth.year,som[i].birth.month,som[i].birth.day,som[i].address,som[i].email); break;
			 }
		}
		if(strcmp(s1,som[i].id)!=0)
            printf("�����ڣ�\n"); break;
	case 2: return;
	default:printf("��ѡ��:\n");
	}
}



//4.����������ѧ����Ϣ
void find2()
{
	int i,b;
	char s1[51];
	printf("     1.��������       \n");
	printf("     2.�˳�         \n");
	printf("��ѡ��:");
	scanf("%d",&b);
	switch(b)
	{
	case 1:
		printf("����Ϊ:\n");
		scanf("%s",s1);
		for(i=0;i<n;i++)
		{
		     if(strcmp(s1,som[i].name)==0)
			 {
		        printf("|ѧ��ѧ��|ѧ������|����|  �Ա�  |   �绰����  |   ����������  | ��ַ  |  �����ʼ�   \n");	
			    printf("   %s\t    %s\t    %d\t   %s\t  %s\t %d��%d��%d��\t %s\t %s\n",som[i].id,som[i].name,som[i].age,som[i].sex,som[i].phonenumer,som[i].birth.year,som[i].birth.month,som[i].birth.day,som[i].address,som[i].email); break;
			 }
		}
		if(strcmp(s1,som[i].name)!=0)
            printf("�����ڣ�\n"); break;
	case 2: return;
	default:printf("��ѡ��:\n");
	}
}



//5.������ɾ��ѧ����Ϣ
void dele1()
{
	int i;
	char p,namme[10];
	system("cls");
	printf("Ҫɾ����Ϣ������Ϊ:\n");
	scanf("%s",namme);
	for(i=0;i<n;i++)
	{
		if(strcmp(som[i].name,namme)==0)
		{
			printf("Ҫɾ����ѧ����ϢΪ��\n");
            printf("|ѧ��ѧ��|ѧ������|����|  �Ա�  |   �绰����  |   ����������  | ��ַ  |  �����ʼ�   \n");
		    printf("   %s\t    %s\t    %d\t   %s\t  %s\t %d��%d��%d��\t %s\t %s\n",som[i].id,som[i].name,som[i].age,som[i].sex,som[i].phonenumer,som[i].birth.year,som[i].birth.month,som[i].birth.day,som[i].address,som[i].email); 
		    printf("�Ƿ�Ҫɾ������y or n��\n");
			scanf("%s",&p);
			if(p=='y')
			{
				for(i=0;i<n;i++)
				{
				    som[i]=som[i+1];
					n=n-1;
					printf("�ɹ���\n");
				}
			}
			else
				printf("����������ز˵�\n");
			caidan();
		}
		else
			printf("�����ڣ�");
	}
	caidan();
}



//6.��ѧ��ɾ��ѧ����Ϣ
void dele2()
{
	int i;
	char num[20],p;
	system("cls");
	printf("Ҫɾ����ѧ��ѧ��Ϊ��\n");
	scanf("%s",num);
	for(i=0;i<n;i++)
	{
		if(strcmp(som[i].id,num)==0)
		{
		    printf("|ѧ��ѧ��|ѧ������|����|  �Ա�  |   �绰����  |   ����������  | ��ַ  |  �����ʼ�   \n");
			printf("   %s\t    %s\t    %d\t   %s\t  %s\t %d��%d��%d��\t %s\t %s\n",som[i].id,som[i].name,som[i].age,som[i].sex,som[i].phonenumer,som[i].birth.year,som[i].birth.month,som[i].birth.day,som[i].address,som[i].email);
		    printf("�Ƿ�Ҫɾ������y or n��\n");
		    scanf("%s",&p);
		    if(p=='y')
			{
			    for(i=0;i<n;i++)
				{
					som[i]=som[i+1];
					n=n-1;
					printf("�ɹ���\n");
				}
			}
			else
				printf("����������ز˵�\n");
			caidan();
		}
		else
			printf("�����ڣ�");
	}
	caidan();
}



//7.��ʾȫ����Ϣ
void all()
{
	int i;
	printf("����%dλѧ��\n",n);
	if(0!=n)
	{
		printf("|ѧ��ѧ��|ѧ������|����|  �Ա�  |   �绰����  |   ����������  | ��ַ  |  �����ʼ�   \n");
		for(i=0;i<n;i++)
		{ 
		    printf("   %s\t    %s\t    %d\t   %s\t  %s\t %d��%d��%d��\t %s\t %s\n",som[i].id,som[i].name,som[i].age,som[i].sex,som[i].phonenumer,som[i].birth.year,som[i].birth.month,som[i].birth.day,som[i].address,som[i].email); 
		}
	}
	system("pause");
}



//8.ϵͳ˵��
void shuoming()
{
	printf("��ϵͳ����������ַ���Ϊ50���������Ϊ100��\n");
	printf("ѧ��ʾ����00��\n");
	printf("����ʾ�������lh\n");
	printf("����ʾ����18\n");
	printf("�Ա�ʾ�����У�man Ů��woman\n");
	printf("�绰ʾ����18888888888\n");
	printf("��������ʾ����1949��10��1�գ�19491001\n");
	printf("��ַʾ�����������ݣ�fjfz\n");
	printf("�����ʼ�ʾ����1888888888@qq.com\n");
	printf("��л����ʹ��\n");
}



//9.�˳�
void tuichu()
{
	printf("��������˳�\n");
	exit(0);
}



//�˵�
void caidan()
{
	int num;
	printf("\n\t*********************ѧ����Ϣ����ϵͳ*************************\n");
    printf("\n\t---------------------1.���ѧ����Ϣ---------------------------");
	printf("\n\t---------------------2.�޸�ѧ����Ϣ---------------------------");
	printf("\n\t---------------------3.��ѧ�Ų���ѧ����Ϣ---------------------");
	printf("\n\t---------------------4.����������ѧ����Ϣ---------------------");
	printf("\n\t---------------------5.������ɾ��ѧ����Ϣ---------------------");
	printf("\n\t---------------------6.��ѧ��ɾ��ѧ����Ϣ---------------------");
	printf("\n\t---------------------7.��ʾȫ����Ϣ---------------------------");
	printf("\n\t---------------------8.ϵͳ˵��-------------------------------");
	printf("\n\t---------------------9.�˳���ϵͳ-----------------------------\n");
	printf("\n\t**************************************************************\n");
    printf("������ѡ��Ĺ���:\n");
	scanf("%d",&num);
	switch(num)
	{	
	case 1:tianjia();break;	
	case 2:xiugai();break;
	case 3:find1();break;
	case 4:find2();break;
	case 5:dele1();break;
	case 6:dele2();break;
	case 7:all();break;
	case 8:shuoming();break;
	case 9:tuichu(); break;
	default:printf("��ѡ��:\n");
	}
}

//������
int main()
{
	while(1)
	{ 
		caidan();
	}
	system("pause"); 
	return 0;
}