#include<stdio.h>

int uoc(int n){
	int uocc=0;
	for(int i=1;i<n;i++){
		if(n%i==0) uocc+=i;
	} return uocc; 

}


int main(){
	int n;
    scanf("%d",&n);
   if(n==uoc(n)) printf("1");
   else printf("0");
   return 0;

}
