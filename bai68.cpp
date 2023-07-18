#include<stdio.h>
int check(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	if(check(n)==check(m)) printf("%d %d",n,m);
	
	else if(check(n)<check(m)) printf("%d %d",n,m);
	else printf("%d %d",m,n);
}
