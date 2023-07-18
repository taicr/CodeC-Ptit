#include<stdio.h>
#include<math.h>
int check (int n){
	int m=n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
		int dem=0;
		while(n%i==0){
			n/=i;
			++dem;
		}
		printf("%d^%d",i,dem);
		 if(n!=1) printf(" * ");
	}
	
}

   
 if(n!=1) printf("%d^1",n);
	
}

int main(){
  int n;
  scanf("%d",&n);
  while(n--){
  	int a;
  	scanf("%d",&a);
  	printf("%d = ",a);
  	check(a);
  	printf("\n");
  }
  return 0;
}
