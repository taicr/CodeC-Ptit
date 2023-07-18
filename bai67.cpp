#include<stdio.h>
#include<math.h>
int nt(int n){
	if(n<2) return 0;
for(int i=2;i<=sqrt(n);i++){
	if(n%i==0) return 0;
}
return 1;
}

int check(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
    int f[47];
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=47;i++){
		f[i]=f[i-1]+f[i-2];
	}
	int i=2;
	while(f[i] <sum){
		i++;
	}
	return (f[i]==sum);
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i=a;i<=b;i++){
		if(nt(i) && check(i)) printf("%d ",i);
	}
	}
	else {
		for(int i=b;i<=a;i++){
		if(nt(i) && check(i)) printf("%d ",i);
	}
	}
		
	return 0;
}
