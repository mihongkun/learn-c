//
// Created by mihon on 2017/6/7.
//

#include <stdio.h>

/**
 * ��ϵ�����
 * @return
 */
int main() {
    int x = 5;
    int y = 5;
    int z = 10;
    /*
     * x�Ƿ����y
     */
    printf("x�Ƿ����y: %s\n", x > y ? "true" : "false");
    /*
     * y�Ƿ���ڵ���x
     */
    printf("y�Ƿ���ڵ���x: %s\n", y >= x ? "true" : "false");
    /*
     * y�Ƿ�С��z
     */
    printf("y�Ƿ�С��z: %s\n", y < z ? "true" : "false");
    /*
     *z�Ƿ�С�ڵ���x
     */
    printf("z�Ƿ�С�ڵ���x : %s\n", z <= x ? "true" : "false");
    /*
     * z�Ƿ����x+y
     */
    printf("z�Ƿ����x+y: %s\n", z == x + y ? "true" : "false");
    /*
     * x�Ƿ񲻵���y
     */
    printf("x�Ƿ񲻵���y: %s\n", x != y ? "true" : "false");

    return 0;
}

