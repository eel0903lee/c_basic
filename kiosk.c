#include <stdio.h>
#include <string.h>

// 메뉴표 생성(전역 변수)
char *burger_name[3] = {"빅맥", "통새우와퍼", "싸이버거"};
char *side_name[3] = {"맥너겟", "치즈스틱", "오징어링"};
char *drink_name[3] = {"코카콜라", "제로콜라", "스프라이트"};

// 가격표 생성(전역)
int burger_price[3] = {5900, 5500, 4300};
int side_price[3] = {2000, 1500, 2000};
int drink_price[3] = {1200, 1000, 1000};

//고객 주문 기록 저장(전역)
char *menu_save[3] = {};    // 주문 메뉴
int price_save[3] = {}; // 주문 가격

void print_main_menu(void);
void print_order(void);
int choice_burger(void);
int choice_side(void);
int choice_drink(void);

int main() {
    while(1) {
        // 1. 메인 메뉴 출력
        print_main_menu();

        // 2. 사용자 메인 메뉴 선택
        int menu_num = 0;   // 사용자가 선택한 메뉴 번호 저장
        puts("■ 원하시는 메뉴 번호를 선택하세요.");
        while(1) { // 1 : True, 0 : False
            printf(">> 번호 : ");
            scanf("%d", &menu_num);
            if (menu_num >= 1 && menu_num <= 4) {
                break;
            } else {
                puts("Warning : 1~4의 번호를 입력해주세요.");
            }
        }
        // 3. 세부메뉴 출력 (1~4 in)
        int order_num;  // 사용자가 선택한 세트 메뉴
        if (menu_num == 1 ) {           // 햄버거 세트
            order_num = choice_burger();
            menu_save[0] = burger_name[order_num-1];
            price_save[0] = burger_price[order_num-1];
            order_num = choice_side();
            menu_save[0] = side_name[order_num-1];
            menu_save[0] = side_name[order_num-1];
            order_num = choice_drink();
            menu_save[0] = drink_name[order_num-1];
            menu_save[0] = drink_name[order_num-1];
        } else if ( menu_num == 2) {    // 햄버거
            order_num = choice_burger();
            menu_save[0] = burger_name[order_num-1];  //버거 이름
            price_save[0] = burger_price[order_num-1]; //버거 가격
            print_order();
        } else if ( menu_num == 3) {    // 사이드
            order_num = choice_side();
            menu_save[0] = side_name[order_num-1];
            menu_save[0] = side_name[order_num-1];
            print_order();
        } else if ( menu_num == 4) {    // 드링크
            order_num = choice_drink();
            menu_save[0] = drink_name[order_num-1];
            menu_save[0] = drink_name[order_num-1];
            print_order();
        }
        // 추가 주문 유무
        puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
        puts("■ 추가 주문하시겠습니까? (yes = 1 / no = 0)");
        printf(">> 입력 : ");
        int order_yn;
        scanf("%d", &order_yn);
        if(order_yn ==1) {
            continue;   
        } else {
            break;      
        }
        }
        // + 기존 주문 기록(3칸) → 늘려서(100칸)
        // 주문할 때마다 몇 개째 count
        // 결재 정보 출력
        // 1. 주문한 기록 → 메뉴, 총 가격 출력
    }

    // 메인 메뉴를 출력하는 함수
    void print_main_menu(void) {
        puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
        puts("■ CNU 버거 2022");
        puts("■ - version 1.0");
        puts("■ - develop by cholong02");
        puts("■ - date 2022.12.07.");
        puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
        puts("■ 저희 매장을 찾아주셔서 감사합니다.");
        puts("■ 원하시는 메뉴를 선택해주세요.");
        puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
        puts("■ 1. 햄버거 세트"); // 햄버거, 사이드, 음료
        puts("■ 2. 햄버거 메뉴"); // 햄버거
        puts("■ 3. 사이드 메뉴"); // 사이드
        puts("■ 4. 드링크 메뉴"); // 음료
        puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    }

    // 1. 햄버거 주문
    int choice_burger(void) {
        puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
        puts("== Burger Menu ==");
        for(int i=0; i<3; i++) {
            printf("□□ %d. %s(%d원) \n", i+1, burger_name[i], burger_price[i]);
        }        
        puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
        int choice_num;
        //choice_num → 사용자가 선택한 번호
        // 1. 빅맥
        // 2. 통새우와퍼
        // 3. 싸이버거
        // burger_name[] 길이 3, 인덱스 범위 0~2
        while(1) {
        printf(">> 번호 : ");
        scanf("%d", &choice_num);
        if(choice_num >=1 && choice_num<=3) {
            break;
        } else {
            puts("Warning : 1~3의 번호를 입력해주세요.");
        }
    }
    return choice_num;
}


// 2. 사이드 주문
int choice_side(void) {
puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("== Side Menu ==");
    for(int i=0; i<3; i++) {
        printf("□□ %d. %s(%d원) \n", i+1, side_name[i], side_price[i]);
    }        
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    int choice_num;
    while(1) {
    printf(">> 번호 : ");
    scanf("%d", &choice_num);
    if(choice_num >=1 && choice_num<=3) {
        break;
    } else {
        puts("Warning : 1~3의 번호를 입력해주세요.");
    }
    }
    return choice_num;
}

// 3. 드링크 주문
int choice_drink(void) {
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("== Drink Menu ==");
    for(int i=0; i<3; i++) {
        printf("□□ %d. %s(%d원) \n", i+1, drink_name[i], drink_price[i]);
    }        
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    int choice_num;
    while(1) {
    printf(">> 번호 : ");
    scanf("%d", &choice_num);
    if(choice_num >=1 && choice_num<=3) {
        break;
    } else {
        puts("Warning : 1~3의 번호를 입력해주세요.");
    }
    }
    return choice_num;
}

// 주문한 메뉴와 가격을 출력
void print_order(void) {
//배열길이 동적계산
    int menu_len = sizeof(menu_save) / sizeof(menu_save[0]);
    int price_len = sizeof(price_save) / sizeof(price_save[0]);
    for(int i=0; i<menu_len; i++) {
        printf("주문[%d] : %s\n", i, menu_save[i]);
    }
    for(int i=0; i<price_len; i++) {
        printf("가격[%d] : %d\n", i, price_save[i]);
    }
}