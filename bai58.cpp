#include<stdio.h>
#include<math.h>
int check(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
		int dem=0;
		while(n%i==0){
			n/=i;
			++dem;
		}
		printf("%d(%d) ",i,dem);
	}
}

	if(n!=1) printf(" %d(1)",n);
	printf("\n");
}
int main(){
	int n;
	scanf("%d",&n);
	for(int j=1;j<=n;j++){
		int a;
		scanf("%d",&a);
		printf("Test %d: ",j);
		check(a);
		
	}
}

