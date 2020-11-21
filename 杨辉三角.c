#include<stdio.h>
#define N 35
int main()
{
	int a[N][N];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			a[i][j]=1;
		}
	}
	for(i=2;i<n;i++)
	{
		for(j=1;j<i;j++)
		{
		a[i][j]=a[i-1][j-1]+a[i-1][j];
	    }
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
		printf("%d",a[i][j]);
	}
		printf("\n");
	}
	return 0;
}
