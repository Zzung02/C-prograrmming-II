/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :파일명과 확장자를 입력받아 전체 파일명을 출력하는 프로그램
*  날짜 :2025/09/24
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[100];
    char ext[20];
    char full[120];

    printf("파일명? ");
    scanf_s("%s", filename, (unsigned)(sizeof(filename) / sizeof(filename[0])));

    printf("확장자? ");
    scanf_s("%s", ext, (unsigned)(sizeof(ext) / sizeof(ext[0])));

    // 파일명 + '.' + 확장자 합치기
    sprintf_s(full, sizeof(full), "%s.%s", filename, ext);

    printf("전체 파일명: %s\n", full);

    return 0;
}