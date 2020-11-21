#include<stdio.h>
int main()
{
	int i=5;
	do
	{
		switch(i%2)
		{
			case 0:i--;printf("%d",i);break;
			case 1:i--;printf("%d",i);continue;
			
		}
		i--;i--;
	//	printf("%d",i);
	}
	while(i>0);
	return 0;
 } 
