#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for ( int i=0;i<n;i++){
		double a;
		scanf("%lf",&a);
		printf("%.15lf \n",1/a);
		
	}
	return 0;
	
}
