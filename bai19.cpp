#include<stdio.h>
#include<math.h>
int  main(){
 		int a,b;
 		scanf("%d%d",&a,&b);
 		int c= sqrt(a);
 		int d=sqrt(b);
 		c=(c==a*a)?c:c+1;
 		printf("%d\n",d-c+1);
 		for(int i = c;i<=d;i++){
 			printf("%d\n",i*i);
		 }
		  return 0; 
}


