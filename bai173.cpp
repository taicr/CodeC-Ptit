#include<stdio.h>

long long max(long long a,long long b){ 
  return (a<b)?b:a;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	 int n;
	 long long sum1=0,sum2=-1e9;
	 scanf("%d",&n);
	 int a[n];
	 for(int i=0;i<n;i++){ 
	 scanf("%d",&a[i]);
	 }
	 for(int i=0;i<n;i++){
	 	sum1+=a[i];
	 	sum2=max(sum1,sum2);		      
		   if (sum1 < a[i]) 
           sum1 = a[i];
 }
 printf("%lld\n",sum2);
 }
}
