#include <stdio.h>

/**
 *  if문(제어문) 기본 문법
 * 
 *  if, else 한번만, if else 여러번 가능
 * 
 * if(조건) {
 *   실행문
 * } else if(조건) { 
 *   실행문
 * } else {
 *   실행문
 * }
*/


int main(void)
{
    int a = 20;
    int b = 10;

    // 조건을 보고
    // 참(true)블록문안에 있는 코드 실행
    // 거짓(false) 다음으로 넘어감
    
    if(a > b){
        printf("a가 10보다 커요");
    }
}
