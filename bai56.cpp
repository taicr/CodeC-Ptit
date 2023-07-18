#include<stdio.h>
int gcd(long long a,long long b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int bcnn(long long a,long long b){
	return ((a*b)/gcd(a,b));
}
int main(){
	long long  a,b;
	scanf("%lld%lld",&a,&b);
	printf("%lld\n%lld\n",gcd(a,b),bcnn(a,b));
	return 0;
}
