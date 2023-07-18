#include<stdio.h>
#include<math.h>
int check(int n){
	if(n<2) return 0;
	else {
	
   for (int i=2;i<=sqrt(n);i++){	
		if(n%i==0) return 0;
		} return 1;
			
}
}
int check2(int n){
    while(n){
    	if(check(n%10)==0) return 0 ;
    	n/=10;
	} return 1;


}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a,b;
		scanf("%d%d",&a,&b);
		int count=0;
		for(int i=a;i<=b;i++){
			if(check(i) && check2(i)==1) count++ ;
	
		}	printf("%d\n",count);
	}
	return 0;
}

