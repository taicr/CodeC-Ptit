#include<stdio.h>
#include<math.h>
int check(int n){
	int chiahet=0;
	 for(int i=1;i<=sqrt(n);i++){
	 	if(n%i==0)
	 	{
	 	    if((n/i)%2==0 && n!=(i*i))chiahet++;
	 	    if(i%2==0) chiahet++;
	 	}
	 }printf("%d\n",chiahet);

	 return chiahet>0;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		check(a[i]);
		
	}
	return 0;
}
