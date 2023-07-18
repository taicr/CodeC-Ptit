#include<stdio.h>
#include<string.h>

struct sinhvien{
	int msv;
	char name[100];
	char birth[100];
	
};
typedef struct sinhvien sv;
sv a[1000];
int n=0;

void task1(){
	scanf("%d",&cnt);
	n+=cnt;
	for(int i=n;i>n-cnt;i--){
	 int stt;
	 scanf("%d",&stt);
	 	 scanf("\n");
	a[i].msv=stt;
     gets(a[i].name);
     gets(a[i].birth);
	}
	printf("%d\n",n);
}
void task2(){
   char ten[100];
   scanf("\n");
	gets(ten);
	int msv;
	scanf("%d",&msv);
	scanf("\n");
	gets(a[msv].name);
	gets(a[msv].birth);
	printf("%s",ten);
	printf("\n");
}
void task3(){
	for(int i=1;i<=n;i++){
		printf("%d %s %s\n",a[i].msv,a[i].name,a[i].birth);
	}
}
int main(){
	while(1){
		int k;
		scanf("%d",&k);
		if(k==1){
			task1();
		}
		else if(k==2){
			task2();
		}
		else if(k==3){
			task3();
			break;
		}
	}
}