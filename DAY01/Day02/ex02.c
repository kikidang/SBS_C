#include <stdio.h>

int main(void) {
    short sh = 32767;                   // short ���� �ִ����� �ʱ�ȭ
    int in = 2147483647;                // �� 21���� �ִ��� ���� �� �ִ�.
    long ln = 2147483647;   
    long long lln = 123451234512345;

    printf("sh : %d\n", sh );
    printf("ih : %d\n", in );
    printf("ln : %ld\n", ln );       //long ���� ���Ĺ��� %1d
    printf("ln : %lld\n", lln );       //long long ���� ���Ĺ��� %11d

    return 0;
}