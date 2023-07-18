#include<stdio.h>
#include<math.h>
long long stn(long long n){

    long long sum=0;
    while(n){
        sum=sum*10+n%10;
        n/=10;
    }
   return sum;
}
long long check(long long n){
    long long k=n;
    int cuoi=n%10;
    int dem=0;
    while(n>=10){
        dem++;
        n/=10;
    }
    int dau=n;
    if(cuoi*2!= dau && dau*2!= cuoi) return 0;
    else {
    long long g= (k - (long long)dau*(pow(10,dem)))/10;
    if(stn(g)==g)return 1;
    return 0;
}
}
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        long long a;
        scanf("%lld",&a);
        if(check(a)) printf("YES\n");
        else printf("NO\n");
   
    }
    return 0;
}
