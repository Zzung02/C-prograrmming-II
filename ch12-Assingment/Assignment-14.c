/*
* 학번: 202110316
* 이름: 김정민
* 과제: 두 개의 2진 파일을 읽어 하나로 합쳐 저장하는 프로그램
* 기능:
*   1. 첫 번째와 두 번째 .dat 파일을 읽음.
*   2. 두 배열을 합쳐 새로운 파일에 저장.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fp1, * fp2, * fp3;
    char file1[50], file2[50], file3[50];
    int* arr1, * arr2, * merged;
    int n1, n2;

    printf("첫 번째 파일명? ");
    scanf("%s", file1);
    fp1 = fopen(file1, "rb");
    if (fp1 == NULL) {
        fprintf(stderr, "파일을 열 수 없습니다.\n");
        exit(1);
    }

    fseek(fp1, 0, SEEK_END);
    n1 = ftell(fp1) / sizeof(int);
    rewind(fp1);
    arr1 = (int*)malloc(sizeof(int) * n1);
    fread(arr1, sizeof(int), n1, fp1);
    fclose(fp1);
    printf("정수 %d개를 읽었습니다.\n", n1);

    printf("두 번째 파일명? ");
    scanf("%s", file2);
    fp2 = fopen(file2, "rb");
    fseek(fp2, 0, SEEK_END);
    n2 = ftell(fp2) / sizeof(int);
    rewind(fp2);
    arr2 = (int*)malloc(sizeof(int) * n2);
    fread(arr2, sizeof(int), n2, fp2);
    fclose(fp2);
    printf("정수 %d개를 읽었습니다.\n", n2);

    // 병합
    merged = (int*)malloc(sizeof(int) * (n1 + n2));
    for (int i = 0; i < n1; i++)
        merged[i] = arr1[i];
    for (int i = 0; i < n2; i++)
        merged[n1 + i] = arr2[i];

    printf("저장할 파일명? ");
    scanf("%s", file3);

    fp3 = fopen(file3, "wb");
    fwrite(merged, sizeof(int), n1 + n2, fp3);
    fclose(fp3);

    printf("정수 %d개를 저장했습니다.\n", n1 + n2);

    free(arr1);
    free(arr2);
    free(merged);
    return 0;
}
