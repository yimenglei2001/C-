#include<stdio.h>
int main()
{
	int grade;
	printf("������ɼ�:");
	scanf("%d",&grade);
	if(grade<0||grade>100)
	printf("�������ݴ���");
	else
	{
		switch(grade/10)
		{
			case 10:
		    case 9:printf("�ɼ�Ϊ%d,�ȼ�ΪA.",grade);break;
			case 8:printf("�ɼ�Ϊ%d,�ȼ�ΪB",grade);break;
			case 7:printf("�ɼ�Ϊ%d,�ȼ�ΪC",grade);break;
			case 6:printf("�ɼ�Ϊ%d,�ȼ�ΪD",grade);break;
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:printf("�ɼ�Ϊ%d,�ȼ�ΪE",grade);break;
		}
	}
	return 0;
	 
 } 
