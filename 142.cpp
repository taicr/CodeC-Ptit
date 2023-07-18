#include<stdio.h>
int main() { 
  int n;
  scanf("%d",&n);
  int k=1;
  int m=n+1;
  int l=2*n-1,b=l;
  int a[2*n+1][2*n+1];
  while(l>0){
  
   for (int i=k;i<=l;i++) { 
    for (int j=k;j<=l;j++) { 
    a[i][j]=m-k;
	}
   }
   k++;
   l--;
}
   for (int i=1;i<=b;i++) { 
   for (int j=1;j<=b;j++) { 
   printf("%d",a[i][j]);
   }
   printf("\n");
   }
}
