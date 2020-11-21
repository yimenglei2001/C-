#include<stdio.h>
#define N 11
int main(){
	int a[N][N],i,j;
	for(i=1;i<N;i++){
		a[i][1]=1;
		a[i][i]=1;
	}
	for(i=3;i<N;i++)
	   for(j=2;j<=i-1;j++)
	       a[i][j]=a[i-1][j]+a[i-1][j-1];
	for(i=1;i<N;i++){
		for(j=1;j<i;j++)
		    printf("%d",a[i][j]);
		printf("\n");    
	}
	printf("\n");
	return 0;       
}
