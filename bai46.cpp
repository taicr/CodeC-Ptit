#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	if(n<m){
	
	for(int i=1;i<=n;i++){
		int adu=m-i+1;
		for(int j=1;j<=m;j++){
			if(j<=m-i) printf("%d",adu--);
			else printf("%d",adu++); 
		}
		printf("\n");
	}
}
else {
	for(int i=n;i>=1;i--){
		int init=i;
		for(int j=1;j<=m;j++){
			if(j<i) printf("%d",init--);
			else printf("%d",init++);
		}
		printf("\n");
	}
}
}
