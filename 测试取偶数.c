#include<stdio.h>
int main()
{
	long s,n;
	int a=0,t=0;
	printf("输入一个整数：");
	scanf("%ld",&s);
	for(;s>0;s/=10)
	{
		n=s%10;
		if(n%2==0)
		{
			a=a*10+n;
		}
	}
	for(;a>0;a/=10)
	{
		t=t*10+a%10;
	}
	printf("结果是:%d",t);
	return 0;
 } 
