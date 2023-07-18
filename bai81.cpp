#include<stdio.h>
#include<math.h>
int stn(int n){
	
	int m=n,sum=0;
	while(n){
		if(n%10==4) return 0;
		else{
		sum=sum*10 + n%10;
     	}
		n/=10;
	}
	 if(sum==m) return 1;
	 return 0;
}

int div10(int n){
	int sum1=0;
	while(n){
		
		if(n%10==4) return 0;
		else {
		sum1+=n%10;
	     }
		n/=10;
	}
	if(sum1%10==0) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a;
		scanf("%d",&a);
		int b=pow(10,a-1),c=pow(10,a);
		for(int i=b;i<c;i++){
			if(stn(i) && div10(i)) printf("%d ",i);
			
		}
		printf("\n");
	}
}

