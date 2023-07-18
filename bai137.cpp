#include<stdio.h>
#include<string.h>

int main(){
	char s[999];
	scanf("%s",s);
	int dem1=0,dem2=0,dem3=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='(') dem1+=1;
		else if(s[i]==')') dem1-=1;
		else if(s[i]=='[') dem2+=1;
		else if(s[i]==']') dem2-=1;
	    else if(s[i]=='{') dem3+=1;
	    else if(s[i]=='}') dem3-=1;
	}
	if(dem1==0 && dem2==0 && dem3==0 ) printf("1");
	else printf("0");
}
