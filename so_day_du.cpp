#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int check(char c[]){
	if(c[0]=='0') return 0;
	int cnt[1001]={0};
	for(int i=0;i<strlen(c);i++){
				if(c[i]-'0'<0 || c[i]-'0'>9 ) return 0;
				else cnt[c[i]-'0']++;
	}
		for(int i=0;i<=9;i++){
			if(cnt[i]==0) return -1;  
		}
		return 1;
}
int main(){
	int t;
	scanf("%d",&t);

	while(t--){
		char c[1001];
	    scanf("%s",c);
        if(check(c)==0) printf("INVALID\n");
        if(check(c)==1) printf("YES\n");
        if(check(c)==-1) printf("NO\n");
	}
}
