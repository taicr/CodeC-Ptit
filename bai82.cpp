#include<stdio.h>

int check(long long n){
	int demchan=0;
	int demle=0;
	while(n){
		if(n%10%2==0) demchan++;
		else demle++;
		n/=10;
	} if(demle<demchan) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long a;
		scanf("%lld",&a);
		if(a%2==0 && check(a)==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
