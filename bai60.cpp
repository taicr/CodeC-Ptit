#include<stdio.h>
#include<math.h>
int check(int n){
	int m=n;
	int sum=1;
	for(int i=2;i<=sqrt(n);i++){
	  if(n%i==0){
		if(i!=n/i){
			sum+=i+n/i;
		}
	 	else sum+=i;
	  }
		
	}
	return sum==m;


}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++){
		if(check(i)) printf("%d ",i);
	}
	return 0;
}
