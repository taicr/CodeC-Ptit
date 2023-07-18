#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int tong=a+b;
	int hieu=a-b;
	long long tich=1ll*a*b;
	int phannguyen=a/b;
	int chiadu=a%b;
	double thuong=(double)a/b;
	printf("%d\n%d\n%d\n%d\n%d\n%.2lf",tong,hieu,tich,phannguyen,chiadu,thuong);
	return 0;
}
