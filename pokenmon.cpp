#include<stdio.h>
#include<string.h>

struct Pokemon{
	char ten[100];
	int tienhoa,have,so_pkm;
};
 typedef struct Pokemon pokemon;
int main(){
	int t,max=0,dem=0,du=0;
	scanf("%d",&t);
	pokemon a[t];
	for(int i=0;i<t;i++){
		getchar();
		gets(a[i].ten);
		scanf("%d%d",&a[i].tienhoa,&a[i].have);
		int b=a[i].have/a[i].tienhoa;
		du=a[i].have- b*a[i].tienhoa;
		a[i].so_pkm= b + ((b*2)+du)/a[i].tienhoa;
		dem+=a[i].so_pkm;
		if(a[i].so_pkm >max) {
			max=a[i].so_pkm;
		}
	}
	printf("%d\n",dem);
   for(int i=0;i<t;i++){
   	if(a[i].so_pkm==max){
   		printf("%s",a[i].ten);
   		break;
   }
	}
}

