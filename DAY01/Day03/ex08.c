#include <stdio.h>
// 비교 연산자
int main(void) {
    int a = 10;
    int b = 11;
    // 비교 연산 시, 결과 참이면 1, 거짓이면 0
    printf("a == b : %d\n", a == b);
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);
    printf("a != b : %d\n", a != b);        // a와 b가 다르면

    return 0;
}