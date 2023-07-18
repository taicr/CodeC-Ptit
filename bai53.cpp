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
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(check(a[i])%10==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
