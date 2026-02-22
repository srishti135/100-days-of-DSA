//Given integers a and b, compute a^b using recursion without using pow() function.
#include <stdio.h>

double power(double a, int b) {
    if (b == 0) return 1;
    if (b < 0)  return 1.0 / power(a, -b);

    if (b % 2 == 0) {
        double half = power(a, b / 2);
        return half * half;
    } else {
        return a * power(a, b - 1);
    }
}

int main() {
    double a;
    int b;

    printf("Enter base (a): ");
    scanf("%lf", &a);

    printf("Enter exponent (b): ");
    scanf("%d", &b);

    printf("%.6g^%d = %.6g\n", a, b, power(a, b));

    return 0;
}