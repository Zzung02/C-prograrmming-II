/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :영어 단어 끝말잇기 게임
*  날짜 :2025/09/24
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char prev[100], curr[100];
    int count = 0;

    printf("word? ");
    scanf_s("%99s", prev, (unsigned)sizeof(prev)); // 첫 번째 단어 입력
    count++;

    while (1) {
        printf("word? ");
        scanf_s("%99s", curr, (unsigned)sizeof(curr));

        // "bye" 입력 시 게임 종료
        if (strcmp(curr, "bye") == 0) {
            printf("게임을 종료합니다.\n");
            printf("성공 횟수: %d\n", count);
            break;
        }

        // 단어 길이가 3 미만이면 탈락
        if (strlen(curr) < 3) {
            printf("too short, try again\n");
            continue;
        }

        // 끝말잇기 규칙 확인
        char last = tolower(prev[strlen(prev) - 1]);  // 이전 단어 마지막 문자
        char first = tolower(curr[0]);                // 현재 단어 첫 문자

        if (last != first) {
            printf("WRONG WORD!!! YOU FAILED!!!\n");
            printf("성공 횟수: %d\n", count);
            break;
        }

        // 안전한 문자열 복사
        strcpy_s(prev, sizeof(prev), curr);
        count++;
    }

    return 0;
}