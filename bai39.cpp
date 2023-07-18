#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m+i-1;j++){
			if(i>j) printf("~");
			else if(i==1 || i==n || i==j || j==m+i-1 ) printf("*");
			else printf(".");
		}
		printf("\n");
	}
}

