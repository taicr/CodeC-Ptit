#include<stdio.h>
#include<math.h>
int check(int n){
	while(n){
		if((n%10)<((n/10)%10)) return 0;
		n/=10;
	}return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a;
		scanf("%d",&a);
		int c=pow(10,a-1);
		int d=pow(10,a);
		for(int i=c;i<d;i++){
			if(check(i)==1) printf("%d ",i);
		
		}
			printf("\n");
	}
}
