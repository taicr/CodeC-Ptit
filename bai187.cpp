#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d",&t);
   while(t--){
   	int n,m;
   	scanf("%d%d",&n,&m);
   	int a[n*m];
   	for(int i=0;i<n*m;i++){
   		scanf("%d",&a[i]);
}
    int cnt=0;
	int h1=0,h2=n-1,c1=0,c2=n-1;
    while(h1<=h2 && c1<=c2) { 
     for(int i=c1;i<=c2;i++){
     	a[h1][i]=cnt;
     	printf("%d ",cnt);
     	cnt++;
	 }
	 h1++;
	 for(int i=h1;i<=h2;i++){
	 	a[i][c2]=cnt;
	 	printf("%d ",cnt);
	 	cnt++;
	 }
	 c2--;
	 if(c1<=c2){
	 	for(int i=c2;i>=c1;i--){
	 		a[h2][i]=cnt;
	 		printf("%d ",cnt);
	 		cnt++;
		 }
		 h2--;
	 }
	 if(h1<=h2){
	 	for(int i=h2;i>=h1;i--){
	 		a[i][c1]=cnt;
	 		printf("%d ",cnt);
	 		cnt++;
		 }
		 c1++;
	 }	
	}
  printf("\n");
}
}

