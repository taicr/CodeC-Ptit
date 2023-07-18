#include<stdio.h>
#include<math.h>
int sotn(int n){
	if(n<10) return 0;
	else {
	
	int m=n;
	int tong=0;
	while(n){
		tong=tong*10+n%10;
		n/=10;
	} 
return tong==m;
}
}

int check2(int n){
	int sum1=0;
	while(n){
		sum1+=n%10;
		n/=10;
	}
	if(sum1%10==0) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--) { 
	  int n;
	  scanf("%d",&n);
	  int a=pow(10,n-1);
	  int b=pow(10,n);
	  int cnt=0;
	  for(int i=a;i<b;i++){
	  	if(sotn(i) && check2(i)==1) cnt++;
	  }
	  printf("%d\n",cnt);
	}
}
