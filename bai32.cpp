#include<stdio.h>
int checkcc(long long n){
	int cl,cc;
	while(n){
		cl=n%10;
		cc=(n/10)%10;
		if(cl<cc) return 0;
		n/=10;
	} return 1;
}
int main(){
	long long n; scanf("%lld",&n);
	long long a[n];
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
		
	}
	for(int i=0;i<n;i++){
		if(checkcc(a[i])) printf("YES\n");
		else printf("NO\n");
	}
}
