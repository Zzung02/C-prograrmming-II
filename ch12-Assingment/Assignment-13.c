/*
* 학번: 202110316
* 이름: 김정민
* 과제: 정수 N개를 입력받아 2진 파일로 저장하고 읽는 프로그램
* 기능:
*   1. N개의 정수를 동적 메모리에 저장.
*   2. 입력받은 파일명으로 텍스트 파일(.txt)과 2진 파일(.dat)을 생성.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* arr;
    int N, i;
    char filename[50];
    FILE* fp_txt, * fp_dat;

    printf("정수의 개수? ");
    scanf("%d", &N);

    arr = (int*)malloc(sizeof(int) * N);
    if (arr == NULL) {
        fprintf(stderr, "메모리 할당 실패\n");
        exit(1);
    }

    // 임의의 정수 입력
    for (i = 0; i < N; i++)
        arr[i] = i + 1;

    printf("파일명? ");
    scanf("%s", filename);

    // 텍스트 파일 저장
    fp_txt = fopen(strcat(strdup(filename), ".txt"), "w");
    for (i = 0; i < N; i++)
        fprintf(fp_txt, "%d ", arr[i]);
    fclose(fp_txt);

    // 2진 파일 저장
    fp_dat = fopen(strcat(filename, ".dat"), "wb");
    fwrite(arr, sizeof(int), N, fp_dat);
    fclose(fp_dat);

    printf("%s.txt와 %s.dat을 생성했습니다.\n", filename, filename);

    free(arr);
    return 0;
}
