#include<stdio.h>
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if( gcd(a,b)==gcd(c,d)) printf("YES\n");
		else printf("NO\n");
	}
}
