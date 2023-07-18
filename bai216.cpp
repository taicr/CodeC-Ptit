#include<stdio.h>

long long gcd(long long a,long long b){
	if(b==0) return a;
	return gcd(b,a%b);
}
long long bcnn(long long a,long long b){
	return a*b/gcd(a,b);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	long long n,m,BCNN=1;
	scanf("%lld%lld",&n,&m);
	for(int i=n;i<=m;i++){
		BCNN=bcnn(i,BCNN);
	}
	printf("%lld\n",BCNN);
}
}
