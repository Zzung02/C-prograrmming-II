/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :직사각형 정보를 RECT 구조체로 정의하고, 좌하단/우상단 좌표를 입력받아 출력하는 프로그램
*  날짜 :2025/09/30
*/

#include <stdio.h>

// 점(point)을 나타내는 구조체
typedef struct {
    int x; // x좌표
    int y; // y좌표
} POINT;

// 직사각형(rectangle)을 나타내는 구조체
typedef struct {
    POINT left_bottom; // 좌하단 점
    POINT right_top;   // 우상단 점
} RECT;

// 직사각형 정보를 출력하는 함수
void print_rect(RECT r) {
    printf("[RECT 좌하단점:(%d, %d) 우상단점:(%d, %d)]\n",
        r.left_bottom.x, r.left_bottom.y,
        r.right_top.x, r.right_top.y);
}

int main(void) {
    RECT rect; // 직사각형 구조체 변수 선언

    // 좌하단 좌표 입력받기
    printf("직사각형의 좌하단점(x,y)? ");
    scanf("%d %d", &rect.left_bottom.x, &rect.left_bottom.y);

    // 우상단 좌표 입력받기
    printf("직사각형의 우상단점(x,y)? ");
    scanf("%d %d", &rect.right_top.x, &rect.right_top.y);

    // 직사각형 정보 출력
    print_rect(rect);

    return 0;
}
