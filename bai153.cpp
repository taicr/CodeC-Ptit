#include<stdio.h>

 int main() { 
 int n;
 scanf("%d",&n); 

   for (int i=1;i<=n;i++) { 
    for(int j=1;j<2*i-1;j+=2) { 
    printf("%c",j+63);
	}
	for(int j=2*i-1;j>=1;j-=2) { 
	printf("%c",j+63);
	}
	printf("\n");
   }
 }
