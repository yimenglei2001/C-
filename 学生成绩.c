#include<stdio.h>
int main()
{
	int grade;
	printf("请输入成绩:");
	scanf("%d",&grade);
	if(grade<0||grade>100)
	printf("输入数据错误");
	else
	{
		switch(grade/10)
		{
			case 10:
		    case 9:printf("成绩为%d,等级为A.",grade);break;
			case 8:printf("成绩为%d,等级为B",grade);break;
			case 7:printf("成绩为%d,等级为C",grade);break;
			case 6:printf("成绩为%d,等级为D",grade);break;
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:printf("成绩为%d,等级为E",grade);break;
		}
	}
	return 0;
	 
 } 
