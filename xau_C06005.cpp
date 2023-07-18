#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char c[9999];
	int n=0;
	char a[123][10000];
	gets(c);
	for(int i=0;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	int cnt[999]={0};
	for(int i=0;i<n;i++){
		cnt[i]=1;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(a[i],a[j])==0 && cnt[i]!=0){
				cnt[i]++;
				cnt[j]=0;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(cnt[i]!=0) printf("%s %d\n",a[i],cnt[i]);
	
	}
}
