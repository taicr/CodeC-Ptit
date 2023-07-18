#include<stdio.h>
int main(){
	int a[2];
	for(int i=0;i<=2;i++){
		scanf("%d",&a[i]);
	}
	int min=a[0];
	for(int i=0;i<=2;i++){
		if(a[i]<a[0]) min=a[i];
	}printf("%d",min);
	return 0;
}
