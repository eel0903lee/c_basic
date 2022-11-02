#include <stdio.h>
// 1~10까지 반복하면서 짝수면 짝수 출력 홀수면 홀수 출력

int main(void) {
    for(int i=1; i<=10; i++) {
        // if(1) → False
        // if(0) → True
        
        if(i % 2 == 0) {
            printf("짝수\n");
        } else {
            printf("홀수\n");
        }
}
}