#include <stdio.h>

/**
 *  주소와 포인터
 *   - 주소 : 메모리번지의 주소 (예 : 21번지, 99번지)
 *   - 주소 → 상수
 *   - 포인터 → 변수(주소)
 * 
 *  int a, b;    # a(100번지), b(200번지)
 *  int *p;
 *  p = &a;      # p(100번지)
 *  p = &b;      # p(200번지)
 *  → p는 100번지, 200번지 : 변수
 *  → &a, &b는 주소 : 상수
 * 
 *  - 두 포인터가 같은 주소 저장
 *    (하나의 변수를 동시에 가리키는 것도 가능)
 * 
 *  int a;  # 99번지
 *  int *pa, *pb;
 *  pa = pb = &a;
 * *pa = 10;
 *  printf("%d", *pb);
 * 
 *  - 주소는 상수이기 때문에 대입연산자 왼쪽에 사용 불가
 *  &a=&b; (X) # a(100번지),b(200번지)
*/

int main(void){
    char ch;
    int in;
    double db;

    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    printf("char 변수 주소 크기 : %d\n", sizeof(&ch));
    printf("int 변수 주소 크기 : %d\n", sizeof(&in));
    printf("char 변수 주소 크기 : %d\n", sizeof(&db));

    printf("char *포인터 크기 : %d\n", sizeof(&pc));
    printf("int *포인터 크기 : %d\n", sizeof(&pi));
    printf("char *포인터 크기 : %d\n", sizeof(&pd));

    printf("char *포인터가 가리키는 변수 크기 : %d\n", sizeof(*pc));
    printf("int *포인터가 가리키는 변수 크기 : %d\n", sizeof(*pi));
    printf("char *포인터가 가리키는 변수 크기 : %d\n", sizeof(*pd));
}