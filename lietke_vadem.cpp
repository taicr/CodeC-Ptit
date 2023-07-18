#include<stdio.h>

int check(int n){
	while(n>=10){
		if((n%10)<=(n/10)%10) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int x,max=0,cnt[100001]={0};
	while(scanf("%d",&x)!=-1){
		if(check(x)){
			max=cnt[x]++;
		}
	}
	for(int i=max;i>=1;i--){
		printf("%d %d",x,i);
	}
}
