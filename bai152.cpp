#include<stdio.h>

int main () { 
  int n;
  scanf("%d",&n);
  int a[n+1][n+1];
  int k=1;
   for (int i=1;i<=n;i++) { 
   for (int j=i;j<=n;j++) { 
    a[j][i]=k;
    k++;
   }
   }
   for (int i=1;i<=n;i++ ) { 
   for (int j=1;j<=i;j++) { 
   printf("%c ",64+a[i][j]);
   }
   printf("\n");
   }
}
