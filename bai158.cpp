#include<stdio.h>
#include<math.h>

int check0(int n ) { 
   for(int i=2;i<=sqrt(n);i++) { 
   if(n%i==0) return 0;
   }
   return 1;
}
int check(int n){
	int sum=0;
	while(n) { 
	  sum+=n%10;
	  n/=10;
	}
	if(sum%5==0) return 1;
	return 0;
}
int main() { 
   int n;
   scanf("%d",&n);
   int cnt=0;
   for(int i=5;i<n;i++) { 
     if(check(i)==1 && check0(i)) {
     	printf("%d ",i);
     	cnt++;
	 }
   }
   printf("\n");
    printf("%d",cnt);
}
