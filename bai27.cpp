#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int m=n;
	while(n>=10){
		n/=10;
	}printf("%d %d",n,m%10);
}
