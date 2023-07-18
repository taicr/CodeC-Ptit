#include<stdio.h>
int main() { 
   int T;
   scanf("%d",&T);
   while(T--) { 
      int N,p;
      scanf("%d%d",&N,&p);
      int x=0;
      for(int i=p;i<=N;i+=p) { 
      int tmp=i;
       while(tmp%p==0) { 
       x++;
       tmp/=p;
	   }
	  }
	  printf("%d\n",x);
   }
 }
