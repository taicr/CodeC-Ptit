#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

struct thisinh{
	int stt;
	char name[100];
	char birth[100];
	float diem1,diem2,diem3,tong;
};

typedef struct thisinh SV;
int main(){
	int n;
	scanf("%d",&n);
	SV a[n];
   for(int i=0;i<n;i++){
   	a[i].stt=i+1;
   		getchar();
	gets(a[i].name);
	gets(a[i].birth);
	scanf("%f%f%f",&a[i].diem1,&a[i].diem2,&a[i].diem3);
	a[i].tong=a[i].diem1+a[i].diem2+a[i].diem3;
   }   
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i].tong < a[j].tong){
                SV temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
     }
     for(int i=0;i<n;i++){
     	printf("%d %s %s %.1f\n",a[i].stt,a[i].name,a[i].birth,a[i].tong);
	 }
}

