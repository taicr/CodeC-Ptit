#include <stdio.h>

// hàm tìm u?c chung l?n nh?t c?a 2 s? a và b
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int n;
    scanf("%d", &n); // d?c s? b? test

    int test_cases[n][2];
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &test_cases[i][0], &test_cases[i][1]); // d?c 2 s? nguyên duong trong m?i b? test
    }

    for (int i = 0; i < n; i++) {
        int result = gcd(test_cases[i][0], test_cases[i][1]); // tìm u?c chung l?n nh?t c?a 2 s? trong b? test
        printf("%d\n", result); // xu?t k?t qu?
    }

    return 0;
}

