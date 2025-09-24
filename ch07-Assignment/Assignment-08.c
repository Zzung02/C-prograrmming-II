/* 학번 :202110316
*  이름 :김정민
*  프로그램명 : 상품 가격 배열에 대해 할인된 가격 계산
*  날짜 :2025/09/24
*/

#include <stdio.h>

    void apply_discount(int price[], int discounted[], int size, int percent) {
    for (int i = 0; i < size; i++) {
        discounted[i] = price[i] * (100 - percent) / 100;
    }
}

int main() {
    int price[5], discounted[5];
    int percent;

    printf("상품가 5개를 입력하세요: ");
    for (int i = 0; i < 5; i++) scanf_s("%d", &price[i]);

    printf("할인율(%%)? ");
    scanf_s("%d", &percent);

    apply_discount(price, discounted, 5, percent);

    for (int i = 0; i < 5; i++) {
        printf("가격: %d  =>  할인 후: %d\n", price[i], discounted[i]);
    }

    return 0;
}