#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,x1,x2;
	scanf("%f %f %f",&a,&b,&c);
    if(a==0) printf("NO");
    else if(a==0,b==0,c==0) printf("NO");
	else if(a!=0){
		double denta=b*b-4*a*c;
		if(denta>0) {
			x1=(-b+sqrt(denta))/(2*a);
			x2=(-b-sqrt(denta))/(2*a);
			printf("%.2f %.2f",x1,x2);
		}
		else if(denta==0){
			x1=(-b)/(2*a);
			printf("%.2f",x1);
		}
		else {
			printf("NO");
		}
	}
	return 0;
}
