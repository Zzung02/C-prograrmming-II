/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :키보드로부터 레코드를 입력받아 구조체 배열에 저장 후 출력
*  날짜 :2025/09/24
*/



//문제:키보드로부터 다음 레코드를 한 줄 입력 받아 필드를
//구분하여 구조체 배열에 저장한 후 출력하는 프로그램을 작성하시오.
//레코드 형식: 이름 | 학번 | 학과 | 학년(정수)
//입력 종료 조건: :"exit" 입력




struct Student {
	char name[24];
	char id[16];
	char major[32];
	int year;

};

typedef struct Student Student;
//함수 원형 선언

/*
파일명: ch09-01.c
내용: 키보드로부터 레코드를 입력받아 구조체 배열에 저장 후 출력
작성자: 김정민
날짜: 2025.09.24
버전: v1.1
*/

#define _CRT_SECURE_NO_WARNINGS   // VS strcpy, strtok 경고 방지
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100   // 최대 학생 수
#define SIZE 200  // 입력 문자열 크기

// ===== 구조체 정의 =====
typedef struct {
    char name[24];    // 이름
    char id[16];      // 학번
    char major[32];   // 학과
    int year;         // 학년
} Student;

// ===== 함수 원형 선언 =====
int inputRecords(Student students[], int max);
void printRecords(Student students[], int count);

// ===== main 함수 =====
int main(void) {
    Student students[MAX];
    int count;

    count = inputRecords(students, MAX);
    printRecords(students, count);

    return 0;
}

// ===== 레코드 입력 =====
int inputRecords(Student students[], int max) {
    char input[SIZE];
    int count = 0;

    printf("학생 정보를 입력하세요 (형식: 이름|학번|학과|학년)\n");
    printf("입력을 종료하려면 'exit' 입력\n");

    while (1) {
        printf(">> ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';  // 개행 제거

        if (strcmp(input, "exit") == 0) break;

        char* token = strtok(input, "|");
        if (token == NULL) continue;
        strcpy(students[count].name, token);

        token = strtok(NULL, "|");
        if (token == NULL) continue;
        strcpy(students[count].id, token);

        token = strtok(NULL, "|");
        if (token == NULL) continue;
        strcpy(students[count].major, token);

        token = strtok(NULL, "|");
        if (token == NULL) continue;
        students[count].year = atoi(token);

        count++;
        if (count >= max) {
            printf("?? 최대 학생 수 초과!\n");
            break;
        }
    }
    return count;
}

// ===== 레코드 출력 =====
void printRecords(Student students[], int count) {
    printf("\n=== 입력된 학생 정보 ===\n");
    for (int i = 0; i < count; i++) {
        printf("이름: %s, 학번: %s, 학과: %s, 학년: %d\n",
            students[i].name,
            students[i].id,
            students[i].major,
            students[i].year);
    }
}
