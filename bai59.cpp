#include<stdio.h>
#include<math.h>

int check(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int so_tn(int n){
	if(n<10) return 0;
	else {
	
	int m=n;
	int tong=0;
	while(n){
		tong=tong*10+n%10;
		n/=10;
	} 
return tong==m;
}
}

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a,b;
		scanf("%d%d",&a,&b);
		int count=0;
		for(int i=a;i<=b;i++){
			if(check(i)==1 && so_tn(i)) {
				   printf("%d ", i);
				count++;
	if (count % 10 == 0) {
                    printf("\n");
                }
            }
        }
        if (count % 10 != 0) {
            printf("\n");
        }
        if (n > 0) {
            printf("\n");
        }
    }
    return 0;
}
