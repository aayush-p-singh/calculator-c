#include <stdio.h>

int main() {

    double a, b;
    char op;

    scanf("%lf %c %lf", &a, &op, &b);

    if (op == '+') printf("%.2lf", a + b);
    else if (op == '-') printf("%.2lf", a - b);
    else if (op == '*') printf("%.2lf", a * b);
    else if (op == '/') printf("%.2lf", a / b);
    else printf("Invalid");

    return 0;
}
