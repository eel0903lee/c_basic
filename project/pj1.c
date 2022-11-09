#include <stdio.h>

/**
 *  숫자 : 5자리
 * 예 : 57256
*/
int main(void) {
    //숙제 1. 숫자를 사용자에게 입력(scanf)
    int num=0;
    int total=0;
    printf("숫자 : ");
    scanf("%d", &num);

    // 57256 ÷ 10 → 몫 : 5725, 나머지 : 6
    // 5725  ÷ 10 → 몫 : 572,  나머지  : 5
    // 572   ÷ 10 → 몫 : 57,   나머지 : 2
    // 57    ÷ 10 → 몫 : 5,    나머지 2
    // 5     ÷ 10 → 몫 : 0,    나머지 5
    while (num>0) {
        total += num % 10;
        num = num / 10;
    }
    // for(int i=1; i<5; i++) {
    //      total += (num%10);
    //      num = num/10 ;
    // }

    // 5 + 7 + 2 + 5 + 6 = 25
    printf("총합 : %d\n", total);
}