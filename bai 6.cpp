#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(b==0) printf("0");
	else {
		int tong=a+b;
	int hieu=a-b;
	int tich=a*b;
	float thuong=(float)a/b;
	int chiadu=a%b;
	printf("%d %d %d %.2f %d",tong,hieu,tich,thuong,chiadu);
	}
	
	return 0;
}
