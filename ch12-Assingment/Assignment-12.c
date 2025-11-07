/*
* 학번: 202110316
* 이름: 김정민
* 과제: 연락처 검색 실패 시 등록 및 파일 저장 기능 추가
* 기능:
*   1. 텍스트 파일에서 연락처를 불러온다.
*   2. 이름 검색 후 전화번호 출력.
*   3. 검색 실패 시 연락처 등록 기능 제공.
*   4. 프로그램 종료 시 모든 연락처를 다시 파일에 저장.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 50

typedef struct {
    char name[LEN];
    char phone[LEN];
} CONTACT;

int main(void) {
    CONTACT* contacts;
    FILE* fp;
    char filename[LEN];
    char search_name[LEN], new_phone[LEN];
    char answer;
    int n = 0, found, i;

    printf("연락처 파일명? ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("파일을 찾을 수 없습니다. 새 파일을 생성합니다.\n");
        fp = fopen(filename, "w");
        if (fp == NULL) {
            fprintf(stderr, "파일 생성 실패\n");
            exit(1);
        }
        fclose(fp);
        n = 0;
    }
    else {
        // 연락처 개수 확인
        char temp1[LEN], temp2[LEN];
        while (fscanf(fp, "%s %s", temp1, temp2) != EOF)
            n++;
        rewind(fp);

        // 동적 메모리 할당
        contacts = (CONTACT*)malloc(sizeof(CONTACT) * (n + 10));
        for (i = 0; i < n; i++)
            fscanf(fp, "%s %s", contacts[i].name, contacts[i].phone);
        fclose(fp);
        printf("%d개의 연락처를 로딩했습니다.\n", n);
    }

    // 검색 및 등록
    while (1) {
        printf("이름(. 입력 시 종료)? ");
        scanf("%s", search_name);
        if (strcmp(search_name, ".") == 0)
            break;

        found = 0;
        for (i = 0; i < n; i++) {
            if (strcmp(search_name, contacts[i].name) == 0) {
                printf("%s의 전화번호 %s로 전화를 겁니다.....\n",
                    contacts[i].name, contacts[i].phone);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("연락처를 찾을 수 없습니다. 연락처를 등록하시겠습니까?(y/n)? ");
            scanf(" %c", &answer);
            if (answer == 'y' || answer == 'Y') {
                printf("전화번호? ");
                scanf("%s", new_phone);
                strcpy(contacts[n].name, search_name);
                strcpy(contacts[n].phone, new_phone);
                n++;
                printf("%s의 연락처가 등록되었습니다.\n", search_name);
            }
        }
    }

    // 저장
    fp = fopen(filename, "w");
    for (i = 0; i < n; i++)
        fprintf(fp, "%s %s\n", contacts[i].name, contacts[i].phone);
    fclose(fp);

    printf("%s에 %d개의 연락처를 저장했습니다.\n", filename, n);
    free(contacts);
    return 0;
}
