/*
* 학번: 202110316
* 이름: 김정민
* 과제: 텍스트 파일 이름을 입력받아 파일 내용을 라인 번호와 함께 출력
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>   // exit 함수 사용을 위해

int main(void) {
    char filename[100];      // 파일 이름 저장용 변수
    FILE* fp;                // 파일 포인터
    char line[256];          // 한 줄씩 읽을 버퍼
    int line_num = 1;        // 라인 번호

    printf("파일명? ");
    scanf("%s", filename);   // 사용자로부터 파일 이름 입력받기

    // 파일 열기 (읽기 모드)
    fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "파일을 열 수 없습니다.\n");
        exit(1); // 프로그램 종료
    }

    // 파일의 내용을 한 줄씩 읽어서 출력
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%d: %s", line_num, line);
        line_num++;
    }

    fclose(fp); // 파일 닫기
    return 0;
}
