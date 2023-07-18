#include<stdio.h>
long long UocSo;
long long USCLN(long a, long b){
	if(b%a==0) {
		UocSo=a;
		return a;
	}
  return USCLN(b,a%b);
}

int main()
{
	long a, b;
	
	scanf("%ld%ld",&a, &b);
	if(a> 0 && b>0)
	{
		USCLN(a,b);
		printf("%ld\n%lld", UocSo, (long long) a*b/UocSo);
	}
}
