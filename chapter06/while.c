#include <stdio.h>

/**
 *  반복문
 *   - 조건을 만족하는 동안 반복해서 실행
 *  1) while 문 - 반복 횟수 모르는 경우
 *  2) for 문   - 반복 횟수 정해진 경우
 * 
 *  예 : 키오스크-while문
*/
int main(void) {
    int a = 1;

    while( a < 10 ) {
        a = a*2;
    }
    printf("a : %d\n",a);
}