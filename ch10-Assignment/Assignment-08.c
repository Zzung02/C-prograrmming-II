/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :PRODUCT 구조체를 정의하고, 매개변수로 전달받아 출력하는 프로그램
*  날짜 :2025/09/30
*/


#include <stdio.h>
#include <string.h>

#define MAX 30 // 제품명 최대 길이
typedef struct {
	char name[MAX]; //제품명
	int price;      // 가격
	int stock;      //재고

}PRODUCT;

// 제품 정보를 출력하는 함수
void print_product(PRODUCT p) {
	printf("[%s %d원 재고:%d]\n", p.name, p.price, p.stock);

}

int main(void) {
	PRODUCT item; // 구조체 변수 선언

	//사용자 입력
	printf("제품명? ");
	scanf("%s", item.name);

	printf("가격? ");
	scanf("%d", &item.price);

	printf("재고? ");
	scanf("%d, &item.stock");

	//출력
	print_product(item);

	return 0;

}