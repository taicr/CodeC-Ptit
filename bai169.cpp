#include<stdio.h>

void sxtang(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]) { 
			 int temp=a[i];
			 a[i]=a[j];
			 a[j]=temp;
			}
		}
	}
}
void sxgiam(int b[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(b[j]>b[i]){
				int tmp=b[i];
				b[i]=b[j];
				b[j]=tmp;
			}
		}
	}
}
int main(){
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++){ 
	  int n;
	  scanf("%d",&n);
	  int a[n],b[n];
	  for(int i=0;i<n;i++){
	  	scanf("%d",&a[i]);
	  	}
	  	for(int i=0;i<n;i++){
	  		scanf("%d",&b[i]);
		  }
		sxtang(a,n);
		sxgiam(b,n);
		printf("Test %d:\n",k);
		int c[2*n],ak=0,bk=0;
		for(int i=0;i<2*n;i++){
			if(i%2==0){
				c[i]=a[ak];
				ak++;
			}
			else {
				c[i]=b[bk];
				bk++;
				}
			}
		 for(int i=0;i<2*n;i++){
				printf("%d ",c[i]);
			}
			printf("\n");
    }
		
	}

