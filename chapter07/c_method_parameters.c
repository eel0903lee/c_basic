#include <stdio.h>

/**
 * int main (void) {
 *     printf("%d\n, sum(a,b)")
 * }
 *     ↓       (return)
 *     ↓          ↑
 *     ↓          ↑
 *     ↓          ↑
 *  (parameters)  ↑
 * int sum(int x, int y){
 *     return x+y;
 * }
 * 
*/
// 함수 → (매개변수), return
// 함수 →     x,      return     
int get_num(void); //선언, ##get_num함수가 main함수 위에 있으면 함수 선언 필요 없음##

int main(void) {
    printf("값 : %d", get_num()); //호출
}

// void : 해당값을 사용하지 않을 경우
int get_num(void) { //정의
    int num;
    printf("number : ");
    scanf("%d", &num);
    return num;
}