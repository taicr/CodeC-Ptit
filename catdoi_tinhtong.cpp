#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* tongchuoi(char* s, int n) {
    char* a = malloc((n + 1) * sizeof(char)); // t?o m?t m?ng d? l?n d? luu tr? chu?i
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n / 2; i++) {
        sum1 = s[i] - '0' + sum1 * 10;
    }
    for (int j = n / 2; j < n; j++) {
        sum2 = s[j] - '0' + sum2 * 10;
    }
    sum1 += sum2;
    sprintf(a, "%d", sum1);
    return a;
}

int main() {
    char s[200];
    scanf("%s", s);
    while (strlen(s) > 1) {
        printf("%s\n", tongchuoi(s, strlen(s)));
        strcpy(s, tongchuoi(s, strlen(s)));
    }
    free(tongchuoi(s, strlen(s))); // gi?i phóng b? nh? dã du?c c?p phát d?ng
    return 0;
}

