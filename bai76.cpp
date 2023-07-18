#include<stdio.h>
#include<math.h>
int stn(long long n){
	long long sum=0;
	while(n){
		sum=sum*10+n%10;
		n/=10;
	}
	return sum;
}

int check(long long n){
	while(n){
		if((n%10)%2==0) return 0;
		n/=10;
	} return 1;
}
int check1(long long n){
	long long sum1=0;
	while(n){
		sum1+=n%10;
		n/=10;
	} if(sum1%2==0) return 0;
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long a;
		scanf("%lld",&a);
		if(a==stn(a) && check(a)==1 && check1(a)==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
