#include<stdio.h>
int main()
{
	int m, n; scanf("%d%d", &m, &n);
	for(int i=1; i<=m; i++)
	{
		if(i<=n)
		{
			for(int j=i; j<=n; j++)
			{
				printf("%c", 64+j);
			}
			for(int j=i; j>1; j--)
			{
				printf("%c", 64+j-1);
			}
		}
		else{
			printf("%c", 64+n);
			
			for(int j=n-1; j>0; j--)
			{
				printf("%c", 64+j);
			}
		}
		printf("\n");
	}
	
}

