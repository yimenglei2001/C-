#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<0||b<0||c<0) 	printf("不构成三角形");
	else if(a+b<=c||a+c<=b||b+c<=a) printf("不构成三角形");
	else if(a==b&&a==c) printf("等边三角形");
	else if(a==b||a==c||b==c) printf("等腰三角形");
	else 
	printf("不等边三角形");
	return 0; 
	
 } 
