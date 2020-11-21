#include<stdio.h>

int main()
{
	int a,b,i,n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		for(i=a;;i++)
		{
			if(i%a==0&&i%b==0)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
 } 
