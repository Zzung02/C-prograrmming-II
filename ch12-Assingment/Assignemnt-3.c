/*
* 학번: 202110316
* 이름: 김정민
* 과제: 텍스트 파일의 모든 문자에 대해 영문자의 개수를 세어 문자별로 출력 (대소문자 구분 없음)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // isalpha(), tolower() 함수 사용을 위해

int main(void) {
    char filename[100];
    FILE* fp;
    int ch;
    int count[26] = { 0 }; // a~z 각 문자의 개수 저장 배열

    printf("파일명? ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "파일을 열 수 없습니다.\n");
        exit(1);
    }

    // 파일에서 한 문자씩 읽어서 알파벳이면 개수를 센다
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) { // 알파벳이면
            ch = tolower(ch); // 소문자로 통일
            count[ch - 'a']++; // 해당 알파벳 위치에 개수 증가
        }
    }

    fclose(fp);

    // 결과 출력
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) { // 등장한 문자만 출력
            printf("%c:%d ", i + 'a', count[i]);
        }
    }

    printf("\n");
    return 0;
}
