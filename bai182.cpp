#include<stdio.h>
void swap(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

int main(){
   int m;
   scanf("%d",&m);
   int a[m+1][m+1];
   for(int i=1;i<=m;i++){
   	 for(int j=1;j<=m;j++){
   	 	scanf("%d",&a[i][j]);
 
		}
   }
  for(int i=1;i<=m;i++){
  	for(int j=1;j<=m;j++){
  		if(i==j)
  		swap(&a[i][j],&a[i][m-j+1]);
  
	  }
  }
   
   for(int i=1;i<=m;i++){
   	for(int j=1;j<=m;j++){
   		printf("%d ",a[i][j]);
	   }
	   printf("\n");
   }
 return 0;
}

