#include<stdio.h>
#include<math.h>

void fun(float a,float b,float c)
{
 	float x1,x2,delta,l1;
 	if(a!=0)
 	{
 		delta=b*b-4*a*c;
 	    if(delta>=0)
 		{
   		    x1=(-b+sqrt(delta))/(2*a);
 			x2=(-b-sqrt(delta))/(2*a);
		    printf("x1=%.3f,x2=%.3f",x1,x2); 
		
		 }
		 else
		 {
		 	delta=sqrt(-delta);
		 	x1=-b/(2*a);
		 	l1=delta/(2*a);
		    printf("x1=%.3f+%.3fi,x2=%.3f-%.3fi",x1,l1,x1,l1); 
		  }
		 
	 }
	 else
	 {
	 	printf("不是一元二次方程"); 
	 }
 }
 int main()
{ 
    float a,b,c;
	printf("输入系数");
	scanf("%f,%f,%f",&a,&b,&c);
	fun(a,b,c);
	return 0; 
} 
