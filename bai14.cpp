#include<stdio.h>
int tong(int n){
	int tong=0;
	while(n){
		tong=tong+n%10;
		n/=10;		
	} 
	printf("%d\n",tong);
	return tong;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	for(int i=0;i<n;i++){
		tong(a[i]);
	}
	return 0;
}
