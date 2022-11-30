#include <stdio.h>
/**
 *  포인터를 사용하는 이유
 *  -  변수를 사용하는 가장 쉬운 방법은 변수 이름 호출
 * (int num = 4;  → num)
 *  - 포인터 사용 → 추가적으로 변수 선언, 주소 연산, 간접 참조 등 각종 연산 수행해야 함 (불편)
 * 
 *  - 포인터를 즐겨 사용할 필요 없음!
 *  - 임베디드 프로그래밍 할 때 메모리에 직접 접근하는 경우 
 *    또는 동적 할당 메모리를 사용하는 경우에는 포인터가 반드시 필요함
*/
void swap(int *pa, int *pb);

int main(void){
    int a = 10, b = 20;
    int temp;
    /**
     *  함수의 매개변수(parameter) 전달할 때 방법 3가지
     *  1. Call by value : C언어, 값을 복사 전달
     *  2. Call by reference : JAVA언어, 값이 위치한 주소를 전달
     *  3. Call by assignment : Python언어, 자료형에 따라 1, 2를 섞어서 사용
    */
    swap(&a, &b);
    printf("a:%d, b:%d\n", a, b);
}

void swap(int *pa, int *pb) {
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}