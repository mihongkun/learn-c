//
// Created by mihon on 2017/6/7.
//

#include <stdio.h>

/**
 * 关系运算符
 * @return
 */
int main() {
    int x = 5;
    int y = 5;
    int z = 10;
    /*
     * x是否大于y
     */
    printf("x是否大于y: %s\n", x > y ? "true" : "false");
    /*
     * y是否大于等于x
     */
    printf("y是否大于等于x: %s\n", y >= x ? "true" : "false");
    /*
     * y是否小于z
     */
    printf("y是否小于z: %s\n", y < z ? "true" : "false");
    /*
     *z是否小于等于x
     */
    printf("z是否小于等于x : %s\n", z <= x ? "true" : "false");
    /*
     * z是否等于x+y
     */
    printf("z是否等于x+y: %s\n", z == x + y ? "true" : "false");
    /*
     * x是否不等于y
     */
    printf("x是否不等于y: %s\n", x != y ? "true" : "false");

    return 0;
}

