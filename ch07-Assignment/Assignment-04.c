﻿/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :배열에서 최댓값,최댓값과 인덱스 찾기
*  날짜 :2025/09/24
*/


#include <stdio.h>

// 함수 원형 선언
void find_min_max_with_index(
    int arr[], int size,
    int* min_val, int* max_val,
    int* min_index, int* max_index);

// 함수 정의
void find_min_max_with_index(
    int arr[], int size,
    int* min_val, int* max_val,
    int* min_index, int* max_index)
{
    *min_val = *max_val = arr[0];
    *min_index = *max_index = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > *max_val) {
            *max_val = arr[i];
            *max_index = i;
        }
        if (arr[i] < *min_val) {
            *min_val = arr[i];
            *min_index = i;
        }
    }
}

// main 함수
int main(void) {
    int data[10] = { 23, 45, 62, 19, 99, 83, 20, 53, 72, 37 };
    int min_val, max_val;
    int min_index, max_index;

    find_min_max_with_index(data, 10, &min_val, &max_val, &min_index, &max_index);

    printf("최댓값 인덱스=%d, 값=%d\n", max_index, max_val);
    printf("최솟값 인덱스=%d, 값=%d\n", min_index, min_val);

    return 0;
}
