#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++){
		int n;	scanf("%d",&n);
		
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
	  	printf("Test %d:\n",k);
	  	
		int dem=1,max=0,cs[99],tmp=0;
		
		for(int i=1;i<n;i++){
			if(a[i]>a[i-1]) {	
			dem++;	
			} 	
			else {
				if(dem>max)
				{
					tmp=0;
					max=dem;
					cs[tmp]=i-max;
					tmp++;
				}
				else if(dem==max)
				{
					cs[tmp]=i-max;
					tmp++;
				}
			 	dem=1;
			}
		}
		if(dem>max)
		{
			tmp=0;
			max=dem;
			cs[tmp]=n-max;
			tmp++;
		}
		else if(dem==max)
		{
			cs[tmp]=n-max;
			tmp++;
		}		
		
		printf("%d\n",max);
		for(int i=0;i<tmp;i++){
			for(int j=cs[i];j<cs[i]+max;j++){
				printf("%d ",a[j]);
			}
			printf("\n");
		}
	}
}

