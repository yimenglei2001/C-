#include<stdio.h>
int main()
{
	int n,m=0,a;
	printf("输入一个正整数:");
	scanf("%d",&n);
	 for(n;n>0;n=n/10)
	 {
	 	a=n%10;
	 	m=m*10+a;
	 }
	 printf("反位数：%d",m);
	 return 0;
 } 
