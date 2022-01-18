#include <stdio.h>

int main(void) {
    
    int a = 10;
    int b = 20;
    int c;
    
    // ����������(prefix)
    // :���� �տ� �ۼ��ϴ� ����������
    // 1. ++
    // 2. +
    // 3. =
    c = ++a + b;
    printf("c = %d\n", c);      // c = 31

    int x = 10;
    int y =20;
    int z;

    // ����������(postfix)
    // :���� �ڿ� �ۼ��ϴ� ����������
    // - ��κ��� �����ں��� ���� �켱������ ����
    // 1. +
    // 2. =
    // 3. ++
    z = x++ + y;
    printf("z = %d\n", z);      // z = 30

    return 0;
}