#include <stdio.h>

int main(void) {
    // ���� �ڷ���
    // bit          : 0,1���� �ڷ㸦 ��Ÿ���� �⺻���� = 2����
    // char         : 1byte = 8bit = 2^8 = 256, -128~127
    // short        : 2byte 
    // int          : 4byte
    // long         : 4byte
    // long long    : 8byte
    char ch1 = 'A' ;
    char ch2 = 65;
    printf("���� %c �ƽ�Ű �ڵ� �� : %d \n", ch1, ch1);
    //�� �� ���� : alt + shift + �Ʒ�����Ű
    printf("�ƽ�Ű �ڵ� ���� %d �� ���� %c \n", ch2, ch2 );
}