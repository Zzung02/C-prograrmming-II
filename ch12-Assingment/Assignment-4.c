/*
* 학번: 202110316
* 이름: 김정민
* 과제: 파일에서 아이디와 비밀번호를 읽어 로그인 성공/실패 판별 프로그램
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10 // 최대 사용자 수
#define LEN 30 // 문자열 길이 제한

// 구조체 정의
typedef struct {
    char id[LEN];
    char pw[LEN];
} LOGIN;

int main(void) {
    LOGIN user[MAX];   // 구조체 배열 선언
    FILE* fp;
    char filename[] = "password.txt";
    char input_id[LEN], input_pw[LEN];
    int i, n = 0;
    int found = 0; // 아이디 존재 여부 확인용 변수

    // 파일 열기
    fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "파일을 열 수 없습니다.\n");
        exit(1);
    }

    // 파일에서 아이디와 비밀번호 읽어오기
    while (fscanf(fp, "%s %s", user[n].id, user[n].pw) != EOF) {
        n++;
        if (n >= MAX) break;
    }
    fclose(fp);

    // 로그인 처리 루프
    while (1) {
        printf("ID? ");
        scanf("%s", input_id);

        // 입력 종료 (ID에 '?' 입력 시 종료)
        if (strcmp(input_id, "?") == 0) break;

        found = 0;
        for (i = 0; i < n; i++) {
            if (strcmp(input_id, user[i].id) == 0) {
                found = 1;
                printf("Password? ");
                scanf("%s", input_pw);

                if (strcmp(input_pw, user[i].pw) == 0)
                    printf("로그인 성공\n");
                else
                    printf("로그인 실패\n");
                break;
            }
        }

        if (!found)
            printf("아이디를 찾을 수 없습니다.\n");
    }

    return 0;
}
