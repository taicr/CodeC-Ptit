#include<stdio.h>
int main (){
	int n;
	scanf("%d",&n);
	int f[31];
	f[0]=0;
	f[1]=1;
	for ( int i=2;i<=31;i++){
	 f[i] =f[i-1]+f[i-2] ;
	 }
	 
for(int i=0;i<n;i++){
	printf("%d ",f[i]);
}

	return 0;
}
