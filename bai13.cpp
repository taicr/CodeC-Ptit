#include<stdio.h>
#include<math.h>
int cp( long long n){
	int can=sqrt(n);
	if(can*can==n) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for ( int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++){
		if(cp(a[i])) printf("YES\n");
		else printf("NO\n");
		
	}
	return 0;
}
