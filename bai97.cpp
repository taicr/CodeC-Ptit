#include<stdio.h>
int main(){
	int T;
	scanf("%d",&T);
for(int j=1;j<=T;j++){
	int n,m,p;
	scanf("%d%d%d",&n,&m,&p);
	int a[n],b[];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	printf("Test %d:\n",j);
	for(int i=0;i<p;i++){
		printf("%d ",a[i]);
		
	}
	for(int i=0;i<m;i++){
		printf("%d ",b[i]);
	}
	for(int i=p;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n")
}

}
