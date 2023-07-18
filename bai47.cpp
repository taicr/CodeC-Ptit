#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	if(n<=m){
	
	for(int i=1;i<=n;i++){
		int init=m;
		for(int j=1;j<=m;j++){
			if(j<i) printf("%c",96+init--);
			else printf("%c",96+init);
		}
		printf("\n");
	}
	

}
else {
	for(int i=1;i<=n;i++){
		int init=n;
		for(int j=1;j<=m;j++){
			if(i<=n){
				if(j<i) printf("%c",96+init--);
				else printf("%c",96+init);
			}
			else printf("%c",96+init--);
		}
		printf("\n");
	}
	
}
}
