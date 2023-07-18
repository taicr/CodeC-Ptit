#include<stdio.h>
#include<string.h>


void check ( char s[]) { 
  int ok=0;
   for(int i=0;i<strlen(s);i++) { 
     if(s[i]=='1') ok=1 ;
      else if(s[i] !='0' || s[i] != '8' || s[i]!= '9' )  { 
     ok=0;
     break;
	}
   }
    if(ok==0) {
	 printf("INVALID\n");
     return ;
	}
    
    ok=0;
   for(int i=0;i<strlen(s);i++) { 
     if(s[i]=='1')  { 
     printf("1");
      ok=1;
	 }
	 else if(ok!=0) printf("0");
	 
   }
   printf("\n");

}

int main() { 
  int t;
  scanf("%d",&t);
  while (t--) { 
    char s[20];
    scanf("%s",s);
    check(s);
    
  }
}
