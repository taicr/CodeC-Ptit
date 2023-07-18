#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void chuanhoa(char c[]){
	c[0]=toupper(c[0]);
	for(int i=1;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
}
void vcl(char c[]){
	for(int i=0;i<strlen(c);i++){
		c[i]=toupper(c[i]);
	}
}
int main(){ 
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char c[100];
	 	char a[20][50];
        int n=0;
        gets(c);
        char *token=strtok(c," ");
        while(token!=NULL){
        	strcpy(a[n],token);
        	n++;
        	token=strtok(NULL," ");
		}

        for(int i=1;i<n;i++){
        	chuanhoa(a[i]);
        	printf("%s",a[i]);
        	if(i!=n-1) printf(" ");
        	if(i==n-1) printf(",");
		}
			    vcl(a[0]);
		printf(" %s",a[0]);
		printf("\n");

	}
}
