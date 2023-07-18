#include<stdio.h>
int main ( )   { 
  int n;
  scanf("%d",&n);
   int a[n+1][n+1];
   int k=1;
    for (int i=1;i<=n;i++) { 
     if(i%2!=0) {
	
     for (int j=1;j<=i;j++) { 
     a[i][j]=k;
     k++;
	 }
	}
	else {
	 
	  for(int j=i;j>=1;j--) { 
	  a[i][j]=k;
	  k++;
	  }
	}
}
	for(int i=1;i<=n;i++) { 
	for (int j=1;j<=i;j++) { 
	printf("%c ",96+a[i][j]);
	}
	printf("\n");
	}
}

