//
// Created by mihon on 2017/6/7.
//

#include <stdio.h>

/**
 * 逻辑运算符
 * @return
 * &&
 * ||
 * ！
 */
int main() {
    /*
     *真与真
     */
    printf("true && true = %s\n", 1 && 1 ? "true" : "false");
    /*
     * 真与假
     */
    printf("true && false = %s\n", 1 && 0 ? "true" : "false");
    /*
     * 假与真
     */
    printf("false && true = %s\n", 0 && 1 ? "true" : "false");
    /*
     * 假与假
     */
    printf("false && false = %s\n", 0 && 0 ? "true" : "false");
    /*
     * 真或真
     */
    printf("true || true = %s\n", 1 || 1 ? "true" : "false");
    /*
     * 真或假
     */
    printf("true || false = %s\n", 1 || 0 ? "true" : "false");
    /*
     * 假或真
     */
    printf("false || true = %s\n", 0 || 1 ? "true" : "false");
    /*
     * 假或假
     */
    printf("false || false = %s\n", 0 || 0 ? "true" : "false");
    /*
     * 非假
     */
    printf("!false = %s\n", 1 && 1 ? "true" : "false");
    /*
     * 非真
     */
    printf("!true = %s\n", !1 ? "true" : "false");
    int x = 0;
    int y = 1;
    /*
     * 或短路
     */
    y || ++x;
    printf("x = %d\n", x);
    /*
     * 与短路
     */
    x && ++y;
    printf("y = %d\n", y);
    return 0;
}

