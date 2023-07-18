#include<stdio.h>
#include<math.h>
int checknt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int check2(int n){
	int sum=0;
	while(n){
			if(checknt(n%10)==0) return 0;
			
		    sum+=n%10;
	        n/=10;
	}
      if(checknt(sum)) return 1;
      return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	
	int a,b;
	scanf("%d%d",&a,&b);
	int dem=0;
   if(a>b){
   	int tmp=a;
   	a=b;
   	b=tmp;
   }
	for(int i=a;i<=b;i++){
		if(check2(i) && checknt(i) ){
			dem++;
		}
	}
	printf("%d\n",dem);
}
}

