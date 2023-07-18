#include<stdio.h>
int check(long long n){

	while(n){
	 if((n%10)%2!=0 ) return 0;
	 n/=10;
	} return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long a;
		scanf("%lld",&a);
			if(a%2==0 && check(a)==1 ) printf("YES\n");
	else printf("NO\n");
	}
return 0;
}
