#include <stdio.h>

/**
 * 구구단 2단 출력
 * 2 × 1 = 2
 * 2 × 2 = 4
 * ...
 * 2 × 9 = 18
*/

int main(void) {
    for(int i = 1; i <= 9; i++){
    printf("2 × %d = %d\n", i, 2*i);
    }
}