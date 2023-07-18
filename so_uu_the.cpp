#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int check(char c[]){ 
  	int demchan=0,demle=0;
  for(int i=0;i<strlen(c);i++){
  	if((c[i]-'0')<0 || (c[i]-'0')>9) return 0;
  	if((c[i]-'0') %2==0) demchan++;
  	 if((c[i]-'0' )%2!=0) demle++;
  }
  if((strlen(c)-'0')%2==0 && demchan>demle || (strlen(c)-'0')%2!=0 && demle>demchan) return 1;
  else return -1;
}

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
	char c[1005];
	gets(c);
	if(check(c)==0) printf("INVALID\n");
	if(check(c)==1) printf("YES\n");
	if(check(c)==-1) printf("NO\n");
}
}
