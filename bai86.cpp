#include<stdio.h>
#include<math.h>
int check(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		for(int i=2;i<=n/2;i++){
		if(check(i)==1 && check(n-i)==1) printf("%d %d ",i,n-i);	
		}
		printf("\n");
	}
}
