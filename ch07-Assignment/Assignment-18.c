/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :중복 없는 집합(set) 구현
*  날짜 :2025/09/24
*/

#include <stdio.h>

#define MAX 10

int exists(int set[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (set[i] == value) return 1; // 이미 존재
    }
    return 0;
}

void print_set(int set[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", set[i]);
    }
    printf("\n");
}

int main() {
    int set[MAX];
    int size = 0;
    int value;

    while (size < MAX) {
        printf("배열에 추가할 원소? ");
        if (scanf_s("%d", &value) != 1) break;

        if (exists(set, size, value)) {
            printf("해당 원소가 이미 [%d]에 존재합니다.\n", value);
        }
        else {
            set[size++] = value;
            print_set(set, size);
        }
    }

    return 0;
}