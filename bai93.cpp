#include<stdio.h>
int main (){
	int n;
	scanf("%d",&n);
	long long f[47];
	f[0]=0;
	f[1]=1;
	for ( int i=2;i<=47;i++){
	 f[i] =f[i-1]+f[i-2] ;
	 }
	 
for(int i=0;i<n;i++){
	printf("%lld ",f[i]);
}

	return 0;
}
