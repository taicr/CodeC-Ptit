#include<stdio.h>
int main(){
	int t,cnt[100001]={0};
	scanf("%d",&t);
	while(t--){
		int n,min=1e9;
		scanf("%d",&n);
		int a[1+n];
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			cnt[a[i]]++;
			int gan=i;
			if(gan<min) gan=min;
		}
		
		for(int i=1;i<=n;i++){
			if(i=min && cnt[a[i]]>1){
				printf("%d\n",a[i]);
			}
		else printf("No\n");
		} 
		
	}
}
