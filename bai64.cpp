#include<stdio.h>

int check(int n){
	int f[47];
	f[0]=1;
	f[1]=1;
	for(int i=2;i<=47;i++){
		f[i]=f[i-1]+f[i-2];
	}
	int i=2;
	   while (f[i] < n) {
        i++;
    }
    return (f[i] == n);
}


int main(){
	int n;
	scanf("%d",&n);
if(check(n)) printf("1");
else printf("0");
	

}
