#include<stdio.h>
#include<math.h>
int max(int a,int b){
	return a<b?b:a;
}

int main(){
  int x1,x2,x3,x4,y1,y2,y3,y4;
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  scanf("%d%d%d%d",&x3,&y3,&x4,&y4);
  int Max_x= x2<=x4?x4:x2;
  int Min_x= x1<=x3?x1:x3;
  int Max_y=y2<=y4?y4:y2;
  int Min_y=y1<=y3?y1:y3;
  int e=max(Max_x-Min_x,Max_y-Min_y);
  printf("%d",e*e);

  }
