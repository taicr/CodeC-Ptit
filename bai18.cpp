#include<stdio.h>
#include<math.h>

int checksnt(int n){
	for( int i=2;i<=sqrt(n);i++){
	while(n%i==0){
	printf("%d ",i);
	n/=i;	
	}
}
   if(n>1) printf("%d",n);
	printf("\n");
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a;
		scanf("%d",&a);
		checksnt(a);
	}
	return 0;
}


