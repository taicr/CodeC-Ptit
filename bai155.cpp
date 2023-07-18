#include<stdio.h>
long long check(long long n) { 
    long long a[92];
    a[0]=1;
    a[1]=1;
    for(int i=2;i<92;i++){
    	a[i]=a[i-1]+a[i-2];
	}
	int i=2;
	while(a[i]<n)
	
	i++;
 return(a[i]==n);
   
	
}

int main(){
	int n;
	scanf("%d",&n);
	long long a[n];
	for(int i=0;i<n;i++){ 
	scanf("%lld",&a[i]);
	}
	for(int i=0;i<n;i++) { 
	if(a[i]==0 || a[i]==1) printf("YES\n");
	else if(check(a[i])) printf("YES\n");
	else printf("NO\n");
	}
}
