#include<stdio.h>
int main() { 
   int n;
   scanf("%d",&n);
   for(int i=n;i>=1;i-- ){ 
    int init =i;
      for(int j=i;j>=1;j--) { 
      printf("%c",63+init++);
	  }
	  printf("\n");
   }
}
