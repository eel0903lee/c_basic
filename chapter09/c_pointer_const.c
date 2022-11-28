#include <stdio.h>

/**
 *  포인터(변수)
 * 
 * int num=4; #99번지
 * int *pn = &num;
 * 
 * num    → 4
 * &num   → 99번지
 * pn     → 99번지
 * *pn    → 4
 * 
 * 변수 앞에 const → 상수(값을 고정)
 * 포인터 변수 앞에 const 붙이면?
 *  -상수 포인터 가능
 *  a=30 (O) : 참조하고 있는 일반 변수에 값 변경 가능
 *  pa = &b (O) : 포인터 변수가 참조하는 주소 변경 가능
 *  *pa =20 (X) : 직접 참조하여 값 변경 불가능
*/

int main(void){
    int a=10, b=20;      // a(21번지), b(22번지) (임의로 가정, 메모리 값 무시)
    const int *pa = &a;  // 21번지

    printf("변수 a 값 : %d\n", *pa);
    pa = &b;
    printf("변수 a 값 : %d\n", *pa);
    pa=&a;
    a=30;
    //*pa = 50; // *pa → 상수 포인터
                // 포인터를 통해 직접 참조하여 값 변경 불가
    printf("변수 a 값 : %d\n", *pa);
    
}