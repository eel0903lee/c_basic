#include <stdio.h>
#include <string.h>

/**
 * BMI ����
 * 1. �Է� : ����� �� ����, ������
 * 2. ��ȯ : ����ȯ �� cm(M)
 * 3. ��� : BMI ���
 * 4. ���� : BMI�� ���� ��� �ο�
 * 5. ��� : BMI ���
*/

int main(void){
    int height;
    int weight;
    printf("����(cm) �Է� : ");
    scanf("%d", &height);
    printf("ü��(kg) �Է� : ");
    scanf("%d", &weight);
    // printf("%d,%d", height, weight); - �ߵǴ��� Ȯ�ο�

    // 2. ��ȯ(����cm �� m) �� :183cm �� 1.83m
    double height_m = (double)height / 100;
    // printf("%.2lf", height_m);
    
    
    // 3. ���
    // BMI���� = ������(kg) / (����(m) �� ����(m))
    double BMI = weight / (height_m * height_m);

    // 4. ����
    // 18.5 �̸� : ��ü��
    // 18.5~23 �̸� : ����
    // 23~26 �̸� : ��ü��
    // 26~30 �̸� : ��
    // 30 �̻� : ����
    

    char BMI_degree[20];

    if(BMI < 18.5) {
        strcpy(BMI_degree, "��ü��");
    } else if (BMI >= 18.5 && BMI < 23) {
        strcpy(BMI_degree, "����");
    }else if (BMI >= 23 && BMI < 26) {
        strcpy(BMI_degree, "��ü��");
    }else if (BMI >= 26 && BMI <30) {
        strcpy(BMI_degree, "��");
    }else if (BMI >= 30) {
        strcpy(BMI_degree, "����");
    } 

    // 5. ���
    printf("���� %dcm, ������ %dkg���� \n", height, weight);
    printf("����� BMI������ %.2lf(��)�� %s�Դϴ�.", BMI, BMI_degree);
}