#include<stdio.h>
int main()
{
	int n,m=0,a;
	printf("����һ��������:");
	scanf("%d",&n);
	 for(n;n>0;n=n/10)
	 {
	 	a=n%10;
	 	m=m*10+a;
	 }
	 printf("��λ����%d",m);
	 return 0;
 } 
