#include<stdio.h>

int check(int n){
	int tich=1;
	for(int i=1;i<=n;i++){
		tich*=i;
	} return tich;
}
int check1(int n){
	int sum=0;
	while(n){
		int x=n%10;
		sum+=check(x);
		n/=10;
	} return sum;
}


int main(){
	int n;
	scanf("%d",&n);
	if(n==check1(n)) printf("1");
	else printf("0");
	return 0;
}
