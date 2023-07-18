#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
     for(int k=1;k<=t;k++){
     	int n;
     	scanf("%d",&n);
     
     	 printf("Test %d:\n",k);
     	for(int i=1;i<=n;i++){
     			int tmp=0;
     		for(int j=1;j<=n;j++){
     			if(j>=i){
     			printf("%d ",tmp+i*i);	
				 }
				 else {
				 	tmp+=j*j;
				 	printf("%d ",tmp);
				 }
			 }
			 printf("\n");
		 }
	}
}
     	
     	
     	
     	
     	
		

