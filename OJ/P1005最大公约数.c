
#include<stdio.h>
 int main()
 {
 	int a;
 	int b;
 	int n;
 	scanf("%d",&n);
	 
 	while(n--)
 	{
 		scanf("%d %d",&a,&b);
 		while(a!=b)
 		{
 			if(a>b)
 			a=a-b;
 			else
 			b=b-a;
		 }
		 printf("%d\n",a);
	 }
	 return 0;
  } 
