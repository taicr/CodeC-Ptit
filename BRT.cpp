#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
int cmp(const void *a,const void *b){
	int *x=(int *)a;
	int *y=(int *)b;
	return *x-*y;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[100005];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
     qsort(a,n,sizeof(int ),cmp);
     int min=1e9,hieu=0,dem=0;
     for(int i=1;i<n;i++){
     	hieu=abs(a[i]-a[i-1]);
     	if(hieu<min){
     		min=hieu;
     		hieu=0;
		 }
	 }
	 for(int i=1;i<n;i++){
	 	hieu=abs(a[i]-a[i-1]);
	 	if(hieu==min){
	 		dem++;
	 		hieu=0;
		 }
	 }
	 printf("%d %d\n",min,dem);
    }
    return 0;
}

