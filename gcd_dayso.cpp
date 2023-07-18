#include<stdio.h>
long long gcd(long long a,long long b){
	if(b==0) return a;
	return gcd(b,a%b);
 }
 long long lcm(long long a,long long b){ 
  return a*b/gcd(a,b);
 }
int main(){
 int t;
 scanf("%d",&t);
 while(t--){
 	int n;
 	scanf("%d",&n);
 	int a[n+1];
 	int b[n+2];
 	for(int i=1;i<=n;i++) { 
 	  scanf("%d",&a[i]);
	 }
	b[1]=a[1];
	b[n+1]=a[n];

	 for(int i=2;i<=n;i++){
	 	b[i]=lcm(a[i],a[i-1]);
	 }
	 for(int i=1;i<=n+1;i++){
	 	printf("%d ",b[i]);
	 }
	 printf("\n");
 }
}
