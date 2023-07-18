#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int first_digit = n;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    int last_digit = n % 10;

    int new_number = last_digit;
    int remaining_digits = n / 10;
    while (remaining_digits >= 10) {
        new_number = new_number * 10 + remaining_digits % 10;
        remaining_digits /= 10;
    }
    new_number = new_number * 10 + first_digit;

    printf("%d", new_number);

    return 0;
}

