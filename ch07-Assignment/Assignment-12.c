﻿/* 학번 :202110316
*  이름 :김정민
*  프로그램명: 배열의 모든 원소를 특정 값으로 채우기
*  날짜 :2025/09/24
*/

#include <stdio.h>

    void fill_array(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        arr[i] = value;
    }
}

int main() {
    int arr[20];
    int value;

    printf("배열에 저장할 값? ");
    scanf_s("%d", &value);

    fill_array(arr, 20, value);

    printf("배열 출력: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}