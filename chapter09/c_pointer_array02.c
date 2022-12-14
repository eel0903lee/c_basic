#include <stdio.h>

// 배열명 → 배열의 시작 번지 주소
//   - 배열명은 주소이므로 포인터에 저장 가능

int main(void){
    int ary[3];      // 배열 : 100번지
    int *pa = ary;   // ary(배열명) = 100번지
                     // pa(100번지)
    
    *pa = 10;               // 배열의 첫번째 요소에 10 입력   
    *(pa +1) = 20;          // 배열의 두번째 요소에 20 입력
    pa[2] = pa[0] + pa[1];  // 베열의 세번째 요소에 30 입력
    // 배열명[인덱스 번호] → 해당 값을 호출
    // ary[0], ary[1], ary[2] : (O)
    // pa[0], pa[1] pa[2] : (O)     # 배열이름 = 시작주소 = 포인터(시작주소)

    // 배열의 인덱스 번호는 볓부터 시작? : 0
    // ary[99] → 배열의 크기(칸 수)는, 길이(len)? 99칸
    //         → 배열의 인덱스 범위? 0~98
    // 배열 길이 계산?
    // int ary[3]
    // sizeof(ary) / sizeof(ary[0])
    //     12      /       4        = 3(3칸)
    int ary_len = sizeof(ary) / sizeof(ary[0]);
    for(int i=0; i<ary_len; i++) {
        printf("%d\n", pa[i]);
    }
}