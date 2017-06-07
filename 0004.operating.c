//
// Created by mihon on 2017/6/7.
//

#include <stdio.h>

/**
 * 赋值运算符
 * @return
 */
int main() {
    int x = 10;
    int y = 10;
    /*
     * 使用简单的赋值语句实现x乘以2
     */
    x = x * 2;
    /*
     * 使用复合语句实现y乘以2
     */
    y *= 2;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    /*
     * 分别尝试不同的运算方式
     */
    x = x / 2;
    y /= 2;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    x = x - 2;
    y -= 2;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    x = x + 2;
    y += 2;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    x = x % 6;
    y %= 6;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    x = x ^ 2;
    y ^= 2;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    x = x & 3;
    y &= 3;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    x = x | 100;
    y |= 100;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    return 0;
}

