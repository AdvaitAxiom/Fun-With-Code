#include <stdio.h>
#include <math.h>

int countDigit(int num) {
    if (num == 0) return 1; // log10(0) is undefined
    int digit = log10(num) + 1;
    return digit;
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int result = countDigit(num);
    printf("Number of digits: %d\n", result);

    return 0;
}
