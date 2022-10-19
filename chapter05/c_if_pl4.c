#include <stdio.h>
#include <string.h>

/**
 * BMI 계산기
 * 1. 입력 : 사용자 → 신장, 몸무게
 * 2. 변환 : 값변환 → cm(M)
 * 3. 계산 : BMI 계산
 * 4. 조건 : BMI에 따른 등급 부여
 * 5. 출력 : BMI 계산
*/

int main(void){
    int height;
    int weight;
    printf("신장(cm) 입력 : ");
    scanf("%d", &height);
    printf("체중(kg) 입력 : ");
    scanf("%d", &weight);
    // printf("%d,%d", height, weight); - 잘되는지 확인용

    // 2. 변환(신장cm → m) 예 :183cm → 1.83m
    double height_m = (double)height / 100;
    // printf("%.2lf", height_m);
    
    
    // 3. 계산
    // BMI지수 = 몸무게(kg) / (신장(m) × 신장(m))
    double BMI = weight / (height_m * height_m);

    // 4. 조건
    // 18.5 미만 : 저체중
    // 18.5~23 미만 : 정상
    // 23~26 미만 : 과체중
    // 26~30 미만 : 비만
    // 30 이상 : 고도비만
    

    char BMI_degree[20];

    if(BMI < 18.5) {
        strcpy(BMI_degree, "저체중");
    } else if (BMI >= 18.5 && BMI < 23) {
        strcpy(BMI_degree, "정상");
    }else if (BMI >= 23 && BMI < 26) {
        strcpy(BMI_degree, "과체중");
    }else if (BMI >= 26 && BMI <30) {
        strcpy(BMI_degree, "비만");
    }else if (BMI >= 30) {
        strcpy(BMI_degree, "고도비만");
    } 

    // 5. 출력
    printf("신장 %dcm, 몸무게 %dkg으로 \n", height, weight);
    printf("당신의 BMI지수는 %.2lf(으)로 %s입니다.", BMI, BMI_degree);
}