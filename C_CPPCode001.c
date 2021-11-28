//WAP to add, subtract, multiply, divide and to find remainder of the given operands?

#include<stdio.h>
int main()
{
    int x = 12, y = 4, sum, sub, mul, div, mod;
    sum = x + y;
    sub = x - y;
    mul = x * y;
    div = x / y;
    mod = x % y;
    printf("Sum of x and y: %d\n", sum);
    printf("Difference between x and y: %d\n", sub);
    printf("Multiplication of x and y: %d\n", mul);
    printf("Remainder when x is divided by y: %d\n", mod);
    printf("Remainder when x is divided by y: %d\n", 5 % 2);

    return 0;
}