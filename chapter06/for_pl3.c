#include <stdio.h>
// 1~10���� �ݺ��ϸ鼭 ¦���� ¦�� ��� Ȧ���� Ȧ�� ���

int main(void) {
    for(int i=1; i<=10; i++) {
        // if(1) �� False
        // if(0) �� True
        
        if(i % 2 == 0) {
            printf("¦��\n");
        } else {
            printf("Ȧ��\n");
        }
}
}