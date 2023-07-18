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
	return sum==m && m>1;


}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b){
			for(int i=a;i<=b;i++){
		if(check(i)) printf("%d ",i);
	}
	}
	else (a>b) {
		for(int i=a;i>=b;i--){
			if(check(i)>1) printf("%d",i);
		}
	}

	return 0;
}
