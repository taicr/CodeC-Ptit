#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
 
struct items
{
     int stt;
     char name[10005],group_items[10000];
     float buy,sell,brand;
};

 typedef struct items items;
 
int main(){

    int t;
    scanf("%d",&t);
    items a[t];
    
    for(int i=0;i<t;i++){
      a[i].stt=i+1;
      getchar();
      gets(a[i].name);
      gets(a[i].group_items);
      scanf("%f%f",&a[i].buy,&a[i].sell);
     a[i].brand=a[i].sell-a[i].buy;
     }
     for(int i=0;i<t;i++){
        for(int j=i+1;j<t;j++){
            if(a[i].brand < a[j].brand){
                items temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
     }
     for(int i=0;i<t;i++){
        printf("%d %s %s %.2f\n",a[i].stt,a[i].name,a[i].group_items,a[i].brand);
     }
}




