#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int chan=0;
	int le=0;
	int check;
	while(n){
		check=n%10;
		if(n%2==0) chan++;
		else le++;
		n/=10;
	} 
	if(chan==0 && le==0) printf("0 0");
	else
	printf("%d %d",le,chan);
	return 0;
}
