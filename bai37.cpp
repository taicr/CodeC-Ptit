#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n*2-i;j++){
			if(j<=n-i) printf("~");
			else if(i==1 || i==n || i+j==n+1 || i+j==2*n) printf("*");
			else printf(".");
		}
		printf("\n");
	}
}


