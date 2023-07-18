#include<stdio.h>

int main(){ 
 int n;
 scanf("%d",&n);
 int a[n+1];
 for(int i=1;i<=n;i++){
 	scanf("%d",&a[i]);
 } 
   int m=1;
   for(int i=1;i<n;i++){
   		int ok=0;
  		for(int j=1;j<=n-i-1;j++){
  		if(a[j]>a[j+1]){
  			int tmp=a[j];
  			a[j]=a[j+1];
  			a[j+1]=tmp;
  			ok=1;
	    }
	    }
	  if(ok==0) break;
	  printf("Buoc %d: ",m++);
	  for(int j=1;j<=n;j++){
  	   printf("%d ",a[j]);
  }
  printf("\n");
  }
}
