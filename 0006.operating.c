//
// Created by mihon on 2017/6/7.
//

#include <stdio.h>

/**
 * �߼������
 * @return
 * &&
 * ||
 * ��
 */
int main() {
    /*
     *������
     */
    printf("true && true = %s\n", 1 && 1 ? "true" : "false");
    /*
     * �����
     */
    printf("true && false = %s\n", 1 && 0 ? "true" : "false");
    /*
     * ������
     */
    printf("false && true = %s\n", 0 && 1 ? "true" : "false");
    /*
     * �����
     */
    printf("false && false = %s\n", 0 && 0 ? "true" : "false");
    /*
     * �����
     */
    printf("true || true = %s\n", 1 || 1 ? "true" : "false");
    /*
     * ����
     */
    printf("true || false = %s\n", 1 || 0 ? "true" : "false");
    /*
     * �ٻ���
     */
    printf("false || true = %s\n", 0 || 1 ? "true" : "false");
    /*
     * �ٻ��
     */
    printf("false || false = %s\n", 0 || 0 ? "true" : "false");
    /*
     * �Ǽ�
     */
    printf("!false = %s\n", 1 && 1 ? "true" : "false");
    /*
     * ����
     */
    printf("!true = %s\n", !1 ? "true" : "false");
    int x = 0;
    int y = 1;
    /*
     * ���·
     */
    y || ++x;
    printf("x = %d\n", x);
    /*
     * ���·
     */
    x && ++y;
    printf("y = %d\n", y);
    return 0;
}

