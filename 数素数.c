#include<stdio.h>
int main()
{
	int i,j,count=0;
	for(i=101;i<=200;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
			else
			{
				if(j==i-1)
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
 } 
