#include<stdio.h>
long long gcd(long long a,long long b) { 
   if(b==0) return a;
   return gcd(b,a%b);
   
}

long long bcnn(long long a,long long b) { 
  return (a*b)/gcd(a,b);
}

int main(){ 
 int t;
 scanf("%d",&t);
 while(t--) { 
 int n;
 scanf("%d",&n);
 long long bc=1;
 for(int i=2;i<=n;i++) { 
 bc=bcnn(bc,i);
 }
 printf("%lld\n",bc);
 }
}
 
