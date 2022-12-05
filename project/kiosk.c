#include <stdio.h>
#include <string.h>

// 메뉴표 생성(전역 변수)
char *burger_name[3] = {"빅맥", "통새우와퍼", "싸이버거"};
char *side_name[3] = {"맥너겟", "치즈스틱", "오징어링"};
char *drink_menu[3] = {"코카콜라", "제로콜라", "스프라이트"};

// 가격표 생성(전역)
int burger_price[3] = {5900, 5500, 4300};
int side_price[3] = {2000, 1500, 2000};
int drink_price[3] = {1200, 1000, 1000};

//고객 주문 기록 저장(전역)
char *menu_save[3] = {};    // 주문 메뉴
int price_save[3] = {}; // 주문 가격

int main(void) {

}