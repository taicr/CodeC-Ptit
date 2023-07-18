#include<stdio.h>
 
  int check(int n) { 
    int sum=0;
    while(n) { 
    if(n%10==9) return 0;
     sum=sum*10+n%10;
     n/=10;
	}
	return sum  ;
  }


int main() { 
   int n;
   scanf("%d",&n);
   int cnt=0;
   for (int i=2;i<n;i++) { 
      if(i==check(i)) {
      	printf("%d ",i);
      	cnt++;
	  }
   }printf("\n");
   printf("%d",cnt);
}
