#include<stdio.h>

int check(int n){
	int tich=1;
	for(int i=1;i<=n;i++){
		tich*=i;
    }
	return tich;
}

int check1(int x){
	int sum=0;
	int m=x;
	while (x){
		sum+=check(x%10);
		x/=10;
	}
	return m==sum ;
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	if(n<m){
			for(int i=n;i<=m;i++){
		if(check1(i)) printf("%d ",i);
	}
}
	else {
			for(int i=n;i>=m;i--){
		if(check1(i)) printf("%d ",i);
	}

	}
	return 0;
}
