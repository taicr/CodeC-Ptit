#include<stdio.h>

int check1(long long n) { 
   long long sum=0;
   long long m=n;
   while(n){
   	sum=sum*10+n%10;
   	n/=10;
   }
   if(sum==m) return 1;
   return 0;

}
int check2(long long n) { 
  while(n) { 
    if(n%10==6) return 1;
    n/=10;
  }
  return 0;
}

int check3(long long n) { 
   int sum=0;
    while(n) { 
     sum+=n%10;
    n/=10;
    }
    for(int i=8;i<=198;i+=10) { 
     if(sum==i) return 1;
    }
 return 0;
}
int main() { 
   int a,b;
   scanf("%d%d",&a,&b);
  
   if(a<b){
   
   for(int i=a;i<=b;i++) { 
   if(check1(i)==1 && check2(i)==1 && check3(i)==1 ) printf("%d ",i);
   }
   
}
else { 
 for(int i=b;i<=a;i++) { 
   if(check1(i)==1 && check2(i)==1 && check3(i)==1 ) printf("%d ",i);
 }
}
}









