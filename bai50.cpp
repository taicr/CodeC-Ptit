#include<stdio.h>
 int main(){
  int n,m; 
  scanf("%d %d", &n, &m);
   for(int i = n; i >= 1; i--){ 
   if(i >= m){
    for(int j = 1; j <= m; j++) printf("%c", 64+m);
	 } 
	 else{ 
	 int init = i; 
	 for(int j = 1; j <= m; j++){ 
	 if(init >= m) printf("%c", 64+m);
	  else printf("%c", 64+init); init++; 
	  } 
	  } 
	  printf("\n");
	   } 
	   }
