#include<stdio.h>
#include<math.h>
int checknt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int max=0,gan=0;
	for(int i=1;i<=n;i++){
		int sum=0;
		for(int j=1;j<=n;j++){
			if(checknt(a[i][j])) {
				sum++;
			}
		}
		if(sum>max){
			max=sum;
			gan=i;
		}
	}
	printf("%d\n",gan);
    for(int i=1;i <=n; i++)
    {
    	if(checknt(a[gan][i])){
    		printf("%d ",a[gan][i]);
		}
	}
}

