#include<stdio.h>
#include<math.h>

int check1(int n){
    int sum2 = 0;
    while(n){
        sum2 += n % 10;
        n /= 10;
    }
    return sum2;
}
int check(int n){
    int sum1 = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) {
            while(n % i == 0){
                n /= i;
                sum1 += check1(i);
            }
        }
    }
    if(n != 1) sum1 += check1(n);

    return sum1;
}


int main(){
    int n;
    scanf("%d", &n);
    if(check(n) == check1(n)) printf("YES\n");
    else printf("NO\n");
    return 0;
}
