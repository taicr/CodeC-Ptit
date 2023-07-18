#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int tong=0;
	if(a<=b){
	
	for(int i=a;i<=b;i++){
		 tong+=i;
	}
	 printf("%d",tong);
}
else {
	for(int i=a;i>=b;i--){
		tong+=i;
	} 
	printf("%d",tong);
}
return 0;
}
