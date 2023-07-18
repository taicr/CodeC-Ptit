#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d",&n);
	int m=n;
	int c=n%10;
	int dem=0;
	while(n>=10){
		++dem;
		n/=10;
	}
	int d=n;
	int giua= m- d * (int)pow(10,dem) - c;
	int res= c*(int) pow(10,dem) + giua + d;
	printf("%d",res);
	return 0;
}
