#include <stdio.h>

int check1(int n) {
	int tmp = n % 10; n /= 10;
    while(n) {
    	if(tmp >= n % 10){
    		return 0;
		}
		tmp = n;
		n /= 10;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        int a, b, count = 0;
        scanf("%d %d", &a, &b);
        for (int i = a; i <= b; i++) {
            if (check1(i)) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
