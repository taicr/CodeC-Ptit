#include<stdio.h>
int main() { 
  int T;
  scanf("%d",&T);
  while (T--) { 
  int n;
  scanf("%d",&n);
   int a[]={1,2,5,10,20,50,100,200,500,1000};
   int cnt=0;
   for(int i=9;i>=0;i--) { 
     while(n>=a[i]) { 
      if(n/a[i]!=0) cnt++;
      n-=a[i];
	 }
   }
   printf("%d\n",cnt);
  }
}
