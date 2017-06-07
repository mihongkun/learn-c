//
// Created by mihon on 2017/6/7.
//

#include <stdio.h>

/**
 * 运算符
 * +
 * -
 * *
 * /
 * @return
 */
int main() {
    int a, b, c, d;
    double result;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    result = a + b - c * d / 10;
    printf("%f\n", result);
    return 0;
}