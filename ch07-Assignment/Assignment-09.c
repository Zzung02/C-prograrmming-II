﻿/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :1~12월 핸드폰 요금 그래프 출력
*  날짜 :2025/09/24
*/

#include <stdio.h>

void print_graph(int fees[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%2d월 %6d: ", i + 1, fees[i]);
        int stars = fees[i] / 2000;  // 2000원당 * 하나
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int fees[12] = { 36000, 42000, 38000, 40000, 45000, 47000,
                    39000, 52000, 41000, 43000, 48000, 65000 };

    print_graph(fees, 12);

    return 0;
}