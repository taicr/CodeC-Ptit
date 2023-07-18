#include<stdio.h>

int check( int n){
	int m=n;
	int i;
	while(n>=10){		
		 n/=10;	
	}
	 if(n==m%10) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for( int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(check(a[i])) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
