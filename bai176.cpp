#include<stdio.h>
void swap(int *a,int *b){
	int tmp=*a;
         *a=*b;
         *b=tmp;
}
int max(long long a,long long b){
	return a<=b?b:a;
}
int main(){ 
 int n;
 scanf("%d",&n);
 int a[n+1][3];
 long long sum=0;
 for(int i=1;i<=n;i++){ 
  for(int j=1;j<=2;j++) { 			
   scanf("%d",&a[i][j]);
 }
 }
 for(int i=1;i<=n;i++){
 	for(int j=i;j<=n;j++){
 		if(a[i][1]>a[j][1]){
 			swap(&a[i][1],&a[j][1]);
 			swap(&a[i][2],&a[j][2]);
		 }
	 }
 }
 long long maxx=a[1][1];
 for(int i=1;i<n;i++){
 for(int j=1;j<=2;j++){ 
 sum=a[i][2]+maxx;
 maxx=max(a[i+1][1],sum);
 }
}
 printf("%lld",maxx+a[n][2]);
 
 return 0;
}

