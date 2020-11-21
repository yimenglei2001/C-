#include<stdio.h>

int main()
{
	int a,b,i,n;
	scanf("%d",&n);
	for(n;n>0;n--)
	{
		scanf("%d%d",&a,&b);
		for(i=a;;i++)
		{
			if(i%a==0&&i%b==0)
			{
				printf("%d",i);
				break;
			}
		}
	}
	return 0;
 } 
