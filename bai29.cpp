#include<stdio.h>
int checkcl(int n){
		int chan=0;
	int le=0;
	int check;
	while(n){
		check=n%10;
		if(n%2==0) chan++;
		else le++;
		n/=10;
	} 
	printf("%d %d",le,chan);
	printf("\n");
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		checkcl(a[i]);
	}
	return 0;
}
