#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct sinhvien{
	int msv;
	char ten[10005];
	char birth[100];
	float diem1,diem2,diem3,tong;
};
typedef struct sinhvien SV;
 
 
 int main(){
 	int t,k=0,,n=0,a[n];
 	scanf("%d",&t);
 	int max=0;
 	getchar();

