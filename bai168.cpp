#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	
	}
		
	for(int i=0;i<n;i++){
        printf("Buoc %d: ",i);
        for(int j=0;j<=i;j++){ 
        if (a[j]>a[i]){
        	 int tmp=a[j];
        	 a[j]=a[i];
        	 a[i]=tmp;
		}
		printf("%d ",a[j]);
		}
		printf("\n");
}
}
