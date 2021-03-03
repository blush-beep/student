#define _CRT_SECURE_NO_WARNINGS 1//头文件
#include<stdio.h>	
#include<stdlib.h>	
#include<string.h>
int n=0,m=0;

//函数声明
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

//出生年月日（嵌套的结构体结构）
struct Birth
{
	int year;//年份
	int month;//月份
	int day;//日期
};

//结构体
struct someone
{
	char id[51];//学号
	char name[51];//姓名
	int  age;//年龄
	char sex[20];//性别
	char phonenumer[51];//电话号码
	struct Birth birth;//出生年月日
	char address[51];//地址
	char email[51];//电子邮件
}som[100];



//1.添加
void tianjia()
{
	system("cls");  
	int i;
	printf("增加的学生数为:\n");
	scanf("%d",&m);
	if(m>0)
	{
		for(i=0;i<=m+n-1;i++)
		{
		printf("第%d位学生的学号为:\n",i+1);
		scanf("%s",som[i].id);
		printf("第%d位学生的姓名为:\n",i+1);
		scanf("%s",som[i].name);
		printf("第%d位学生的年龄为:\n",i+1);
		scanf("%d",&som[i].age);
		printf("第%d位学生的性别为:\n",i+1);
		scanf("%s",&som[i].sex);
		printf("第%d位学生的电话号码为:\n",i+1);
		scanf("%s",som[i].phonenumer);
		printf("第%d位学生的出生年份为:\n",i+1);
		scanf("%d",&som[i].birth.year );
		printf("第%d位学生的出生月份为:\n",i+1);
		scanf("%d",&som[i].birth.month);
		printf("第%d位学生的出生日为:\n",i+1);
		scanf("%d",&som[i].birth.day);
		printf("第%d位学生的地址为:\n",i+1);
		scanf("%s",som[i].address);
		printf("第%d位学生的电子邮件为:\n",i+1);
		scanf("%s",som[i].email);
		}
	}
	else
	{
		printf("m must > 0.\n");
	}
	n=n+m;
	printf("成功！\n");	
    caidan();		
}



//2.修改
void xiugai()
{
	int i,takein,s4,s7,ss7,sss7;
	char good,sex1[20],s1[51],s2[51],s3[51],s5[51],s6[51];
	printf("想要修改的学生的学号是:\n");
	scanf("%s",s1);
	for(i=0;i<n;i++)
	{
		if(strcmp(som[i].id,s1)==0)
		{
			printf("     1.改姓名      \n");
			printf("     2.改年龄      \n");
			printf("     3.改性别      \n");
			printf("     4.改电话      \n");
			printf("     5.改出生年月日\n");
			printf("     6.改地址      \n");
			printf("     7.改电子邮件  \n");			
			printf("     8.退出        \n");
			printf("请选择要修改的信息:\n");
			scanf("%d",&takein);
			switch(takein)
			{
			case 1:
				printf("新的姓名为:\n");
				scanf("%s",s2);
				strcpy(som[i].name,s2);
				printf("是否继续修改？(y or n)\n");
				scanf("%s",&good);
				if(good=='y')
				{
					xiugai();
				}
				if(good=='n')
				{caidan();}
				break;
			case 2:
				printf("新的年龄为:\n");
				scanf("%d",&s4); 
				som[i].age=s4; 
				printf("是否继续修改？(y or n)\n");
				scanf("%s",&good);
				if(good=='y')
				{
					xiugai();
				}
				if(good=='n')
				{caidan();}
				break;
			case 3:
				printf("新的性别为:\n");
				scanf("%s",&sex1);
				strcpy(som[i].sex,sex1); 
				printf("是否继续修改？(y or n)\n");
				scanf("%s",&good);
				if(good=='y')
				{
					xiugai();
				}

				if(good=='n') 
				{caidan();}
				break;
			case 4:
				printf("新的电话为:\n");
				scanf("%s",s3);
				strcpy(som[i].phonenumer,s3); 
				printf("是否继续修改？(y or n)\n");
				scanf("%s",&good);
				if(good=='y')
				{
					xiugai();
				}
				if(good=='n')
				{caidan();}
				break;
			case 5:
				printf("新的出生年份为:\n");
				scanf("%d",&s7);
				som[i].birth.year=s7; 
				printf("新的出生月份为:\n");
				scanf("%d",&ss7);
				som[i].birth.month=ss7; 
				printf("新的出生日为:\n");
				scanf("%d",&sss7);
				som[i].birth.day=sss7;  
				printf("是否继续修改？(y or n)\n");
				scanf("%s",&good);
				if(good=='y')
				{
					xiugai();
				}
				if(good=='n')
				{caidan();}
				break;
			case 6:
				printf("新的地址为:\n");
				scanf("%s",s5);
				strcpy(som[i].address,s5);
				printf("是否继续修改？(y or n)\n");
				scanf("%s",&good);
				if(good=='y')
				{
					xiugai();
				}
				if(good=='n')
				{caidan();}
				break;
			case 7:
				printf("新的电子邮件为:\n");
				scanf("%s",s6);
				strcpy(som[i].email,s6);
				printf("是否继续修改？(y or n)\n");
				scanf("%s",&good);
				if(good=='y')
				{
					xiugai();
				}
				if(good=='n')
				{caidan();}
				break;
		    case 8: return;
			default:printf("请选择:\n");
			}
			printf("成功！\n");
		}
		else
			printf("不存在！");
	}
}



//3.按学号查找学生信息
void find1()
{
	int i,b;
	char s1[51];
	printf("     1.输入学号       \n");
	printf("     2.退出         \n");
	printf("请选择:");
	scanf("%d",&b);
	switch(b)
	{
	case 1:
		printf("学号为:\n");
		scanf("%s",s1);
		for(i=0;i<n;i++)
		{
		     if(strcmp(s1,som[i].id)==0)
			 {
		        printf("|学生学号|学生姓名|年龄|  性别  |   电话号码  |   出生年月日  | 地址  |  电子邮件   \n");	
			    printf("   %s\t    %s\t    %d\t   %s\t  %s\t %d年%d月%d日\t %s\t %s\n",som[i].id,som[i].name,som[i].age,som[i].sex,som[i].phonenumer,som[i].birth.year,som[i].birth.month,som[i].birth.day,som[i].address,som[i].email); break;
			 }
		}
		if(strcmp(s1,som[i].id)!=0)
            printf("不存在！\n"); break;
	case 2: return;
	default:printf("请选择:\n");
	}
}



//4.按姓名查找学生信息
void find2()
{
	int i,b;
	char s1[51];
	printf("     1.输入姓名       \n");
	printf("     2.退出         \n");
	printf("请选择:");
	scanf("%d",&b);
	switch(b)
	{
	case 1:
		printf("姓名为:\n");
		scanf("%s",s1);
		for(i=0;i<n;i++)
		{
		     if(strcmp(s1,som[i].name)==0)
			 {
		        printf("|学生学号|学生姓名|年龄|  性别  |   电话号码  |   出生年月日  | 地址  |  电子邮件   \n");	
			    printf("   %s\t    %s\t    %d\t   %s\t  %s\t %d年%d月%d日\t %s\t %s\n",som[i].id,som[i].name,som[i].age,som[i].sex,som[i].phonenumer,som[i].birth.year,som[i].birth.month,som[i].birth.day,som[i].address,som[i].email); break;
			 }
		}
		if(strcmp(s1,som[i].name)!=0)
            printf("不存在！\n"); break;
	case 2: return;
	default:printf("请选择:\n");
	}
}



//5.按姓名删除学生信息
void dele1()
{
	int i;
	char p,namme[10];
	system("cls");
	printf("要删除信息的姓名为:\n");
	scanf("%s",namme);
	for(i=0;i<n;i++)
	{
		if(strcmp(som[i].name,namme)==0)
		{
			printf("要删除的学生信息为：\n");
            printf("|学生学号|学生姓名|年龄|  性别  |   电话号码  |   出生年月日  | 地址  |  电子邮件   \n");
		    printf("   %s\t    %s\t    %d\t   %s\t  %s\t %d年%d月%d日\t %s\t %s\n",som[i].id,som[i].name,som[i].age,som[i].sex,som[i].phonenumer,som[i].birth.year,som[i].birth.month,som[i].birth.day,som[i].address,som[i].email); 
		    printf("是否要删除？（y or n）\n");
			scanf("%s",&p);
			if(p=='y')
			{
				for(i=0;i<n;i++)
				{
				    som[i]=som[i+1];
					n=n-1;
					printf("成功！\n");
				}
			}
			else
				printf("按任意键返回菜单\n");
			caidan();
		}
		else
			printf("不存在！");
	}
	caidan();
}



//6.按学号删除学生信息
void dele2()
{
	int i;
	char num[20],p;
	system("cls");
	printf("要删除的学生学号为：\n");
	scanf("%s",num);
	for(i=0;i<n;i++)
	{
		if(strcmp(som[i].id,num)==0)
		{
		    printf("|学生学号|学生姓名|年龄|  性别  |   电话号码  |   出生年月日  | 地址  |  电子邮件   \n");
			printf("   %s\t    %s\t    %d\t   %s\t  %s\t %d年%d月%d日\t %s\t %s\n",som[i].id,som[i].name,som[i].age,som[i].sex,som[i].phonenumer,som[i].birth.year,som[i].birth.month,som[i].birth.day,som[i].address,som[i].email);
		    printf("是否要删除？（y or n）\n");
		    scanf("%s",&p);
		    if(p=='y')
			{
			    for(i=0;i<n;i++)
				{
					som[i]=som[i+1];
					n=n-1;
					printf("成功！\n");
				}
			}
			else
				printf("按任意键返回菜单\n");
			caidan();
		}
		else
			printf("不存在！");
	}
	caidan();
}



//7.显示全部信息
void all()
{
	int i;
	printf("共有%d位学生\n",n);
	if(0!=n)
	{
		printf("|学生学号|学生姓名|年龄|  性别  |   电话号码  |   出生年月日  | 地址  |  电子邮件   \n");
		for(i=0;i<n;i++)
		{ 
		    printf("   %s\t    %s\t    %d\t   %s\t  %s\t %d年%d月%d日\t %s\t %s\n",som[i].id,som[i].name,som[i].age,som[i].sex,som[i].phonenumer,som[i].birth.year,som[i].birth.month,som[i].birth.day,som[i].address,som[i].email); 
		}
	}
	system("pause");
}



//8.系统说明
void shuoming()
{
	printf("本系统可容纳最大字符数为50，最大人数为100。\n");
	printf("学号示例：00×\n");
	printf("姓名示例：李华：lh\n");
	printf("年龄示例：18\n");
	printf("性别示例：男：man 女：woman\n");
	printf("电话示例：18888888888\n");
	printf("出生日期示例：1949年10月1日：19491001\n");
	printf("地址示例：福建福州：fjfz\n");
	printf("电子邮件示例：1888888888@qq.com\n");
	printf("感谢您的使用\n");
}



//9.退出
void tuichu()
{
	printf("按任意键退出\n");
	exit(0);
}



//菜单
void caidan()
{
	int num;
	printf("\n\t*********************学生信息管理系统*************************\n");
    printf("\n\t---------------------1.添加学生信息---------------------------");
	printf("\n\t---------------------2.修改学生信息---------------------------");
	printf("\n\t---------------------3.按学号查找学生信息---------------------");
	printf("\n\t---------------------4.按姓名查找学生信息---------------------");
	printf("\n\t---------------------5.按姓名删除学生信息---------------------");
	printf("\n\t---------------------6.按学号删除学生信息---------------------");
	printf("\n\t---------------------7.显示全部信息---------------------------");
	printf("\n\t---------------------8.系统说明-------------------------------");
	printf("\n\t---------------------9.退出本系统-----------------------------\n");
	printf("\n\t**************************************************************\n");
    printf("请输入选择的功能:\n");
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
	default:printf("请选择:\n");
	}
}

//主函数
int main()
{
	while(1)
	{ 
		caidan();
	}
	system("pause"); 
	return 0;
}