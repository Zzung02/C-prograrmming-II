/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :배열 원소의 합을 계산
*  날짜 :2025/9/25
*/

#include <stdio.h>

int sum_array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int data[5] = { 1, 2, 3, 4, 5 };
    int result = sum_array(data, 5);

    printf("¹?¿­ ¿ø¼??? ??: %d\n", result);
    return 0;
}