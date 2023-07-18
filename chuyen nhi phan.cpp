#include <stdio.h>

int main() { 
    int n;
    scanf("%d",&n);
    int dem=1;
    int a[100];
    while(n!=0) { 
        a[dem]=n%2;
        dem++;
        n/=2;
    }
    if (dem == 1) { 
        printf("0");
    } else {
        for(int i=dem-1;i>=1;i--) { 
            printf("%d",a[i]);
        }
    }
    return 0;
}

