#include<stdio.h>
#include<math.h>
int main(){
	int a[4][3],sum=0;
	for(int i=1;i<=3;i++){
		for(int j=1;j<=2;j++){
			scanf("%d",&a[i][j]);
		}
	}
		for(int i=1;i<=3;i++){
			int tich=1;
			for(int j=1;j<=2;j++){
				tich*=a[i][j];
			}
			sum+=tich;
		}
		int n=sqrt(sum);
	  if(n*n==sum) printf("YES");
	  else printf("NO");
}
