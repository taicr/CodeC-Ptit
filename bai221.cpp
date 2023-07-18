#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,dem=0;
		scanf("%d",&n);
		int a[n+1];
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[j]==a[i]) {
				printf("%d\n",a[i]);
				dem++;
				}
			}
			if(dem==1) break;
		}
		if(dem==0) printf("No\n");
	}
}

