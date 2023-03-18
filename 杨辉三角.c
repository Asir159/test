#define N 15
#include <stdio.h>
int main()
	{
	long int a[N][N]={1};
	int i,j;
	for(i=1;i<=N-1;i++)
	{
		for(j=1;j<=i;j++)
		{	
			a[i][j]=a[i-1][j-1]+a[i-1][j];
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
	}