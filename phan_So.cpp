#include<stdio.h>

long long gcd(long long a,long long b){
    if(b==0) return a;
    return gcd(b,a%b);
}

long long lcm(long long a,long long b){
    return a*b/gcd(a,b);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int k=1;k<=n;k++){
        long long a,b,c,d;
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
        printf("Case #%d :\n",k);
        long long ps1=gcd(a,b),ps2=gcd(c,d);
        a=a/ps1,b=b/ps1,c=c/ps2,d=d/ps2;
        long long bcnn=lcm(b,d);
        long long x=bcnn/b,y=bcnn/d;
        printf("%lld/%lld %lld/%lld\n",a*x/bcnn,c*y/bcnn);
        printf("%lld\n",a*x/bcnn + c*y/bcnn);
        printf("%lld/%lld\n",(a*x/bcnn)/(c*y/bcnn));
    }
    return 0;
}

