#include<stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	while (T--){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
	 int max=-1e9	;
	 int dem=0;
	      for(int i=0;i<n;i++){
	      	if(a[i]>max) {
			   dem++;
			   max=a[i];
			  }
			  
		  }
		  printf("%d",dem);
		  printf("\n");
	}
}
