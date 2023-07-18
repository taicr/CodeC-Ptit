#include<stdio.h>
#include<math.h>
int check(int n){
	if(n<2) return 0;
	else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0;
		}
		return 1;
	}
}


int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			if(check(a[i])) printf("%d ",a[i]);
		}
		printf("\n");
	}
}
