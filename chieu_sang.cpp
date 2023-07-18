#include<stdio.h>
int main(){
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int a[m+1];
	for(int i=1;i<=m;i++){
		scanf("%d",&a[i]);
	}
	int temp=0,cnt=0;
	for(int i=1;i<=m;i++){
		if(a[i]-k>temp) {
			cnt=+(a[i]-k-temp+2*k)/(2*k);
		}
		temp=a[i]+k;
	}
	if(a[m]+k<n) cnt+=(n-a[m]-k+2*k)/(2*k);
 
	printf("%d",cnt);
}
