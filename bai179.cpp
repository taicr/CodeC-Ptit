#include<stdio.h>
void swap(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int k,l;
	scanf("%d%d",&k,&l);
	
	for(int i=1;i<=m;i++){
		swap(&a[i][k],&a[i][l]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

