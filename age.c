#include<stdio.h>
int main()
{
	const int MINOR=35;
	int age=0;
	printf("请输入你的年龄：");
	scanf("%d",&age);
	printf("你的年龄是：%d\n",age);
	if(age<MINOR)
	{
		printf("年轻是美好的。");
	 } 
	 printf("\n年龄决定了你的精神世界，好好珍惜吧。");
	 return 0;
 } 
