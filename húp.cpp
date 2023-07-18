#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct Sinhvien{
	int msv;
	char ten[100];
	char ns[100];
	double gpa;
};
typedef struct Sinhvien sv;
int main(){
	int t;
	scanf("%d",&t);
	sv a[1005];

	for(int i=0;i<t;i++){
		a[i].msv=i+1;	
		getchar();
		gets(a[i].ten);
		gets(a[i].ns);
		scanf("%lf",&a[i].gpa);
	}
	for(int i=0;i<t;i++){
		for(int j=i+1;j<t;j++){
			if(a[i].gpa <a[j].gpa ){
				sv tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
			else if(a[i].gpa==a[j].gpa && a[i].msv > a[j].msv){
				sv tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
			
		}
	}
	for(int i=0;i<t;i++){
		if(a[i].msv <10){
			printf("SV%04d ",a[i].msv);
			
		}
		else if(a[i].msv>=10 && a[i].msv <100) {
			printf("SV%03d ",a[i].msv);
       }
       else if(a[i].msv>=100 && a[i].msv<1000) printf("SV%02d ",a[i].msv);
       else printf("SV%d ",a[i].msv);
       printf("%s %s %.2lf",a[i].ten,a[i].ns,a[i].gpa);
       printf("\n");
  }

}