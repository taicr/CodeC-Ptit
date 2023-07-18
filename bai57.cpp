#include<stdio.h>
#include<math.h>
int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++){
	for (int j=i+1;j<=m;j++){
		if(gcd(i,j)==1) printf("(%d,%d)\n",i,j);
	}
	}
}
