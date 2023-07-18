#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
 for(int i=T;i>=1;T--){
    int n;
    scanf("%d",&n);
    int a[n];
    int count[100]={0};
        for(int i=0 ;i<n; i++){
    	
        scanf("%d",&a[i]);
		}
        printf("Test %d:\n",T);
     for(int i=0; i<n; i++){
          count[a[i]]++;
     }
    for(int i=0;i<n;i++){
        if(count[a[i]]!=0){

         printf("%d xuat hien %d lan\n",a[i],count[a[i]]);
         count[a[i]]=0;


        }
        
    }
 printf("\n");
}

} 

