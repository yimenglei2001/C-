#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<0||b<0||c<0) 	printf("������������");
	else if(a+b<=c||a+c<=b||b+c<=a) printf("������������");
	else if(a==b&&a==c) printf("�ȱ�������");
	else if(a==b||a==c||b==c) printf("����������");
	else 
	printf("���ȱ�������");
	return 0; 
	
 } 
