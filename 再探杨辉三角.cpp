#include<stdio.h>
int main()
{
	int n,a,b,c,m=10;
	for(n=0;n<m;n++,putchar('\n'))
	   for(a=n,b=c=1;a>=0;c=c*a--/b++)
	      printf("%d",c);
	return 0;      
}
