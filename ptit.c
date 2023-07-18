#include<stdio.h>
int main()
{
	int m, n; scanf("%d%d", &m, &n);
	for(int i=1; i<m+1; i++)
	{
		if(i<=n)
		{
			for(int j=i; j<=n; j++)
			{
				printf("%d ", j);
			}
			for(int j=i; j>0; j--)
			{
				printf("%d ", j-1)
			}
		}
		else{
			printf("%d ", i)
			for(int j=n-1; j>0; j--)
			{
				printf("%d ", j);
			}
		}
		printf("\n");
	}
	
}
