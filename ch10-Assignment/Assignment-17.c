
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :노래 관리 프로그램 (제목/가수 검색 기능)
*  날짜 :2025/09/30
*/



#include <stdio.h>
#include <string.h>

#define SIZE 8
#define MAX 30

// SONG 구조체 정의
typedef struct {
    char title[MAX];   // 곡명
    char artist[MAX];  // 가수명
    char genre[MAX];   // 장르
    int playtime;      // 재생시간 (초)
} SONG;

// 곡 정보 출력 함수
void print_song(SONG s) {
    printf("%-15s %-10s %-8s %d초\n", s.title, s.artist, s.genre, s.playtime);
}

int main(void) {
    // 노래 데이터 (문제 예시 기반)
    SONG list[SIZE] = {
        {"thank u, next", "Ariana Grande", "pop", 208},
        {"Attention", "Charlie Puth", "pop", 211},
        {"별 보러 가자", "박보검", "ballad", 316},
        {"How Long", "Charlie Puth", "pop", 198},
        {"I’m Fine", "방탄소년단", "hip-hop", 209},
        {"봄날", "방탄소년단", "hip-hop", 274},
        {"Awake", "방탄소년단", "ballad", 226},
        {"아낙네", "MINO", "hip-hop", 241}
    };

    char keyword[MAX];
    int found;

    while (1) {
        printf("키워드(제목/아티스트)? ");
        scanf("%s", keyword);

        // 입력이 "!" 이면 종료
        if (strcmp(keyword, "!") == 0) break;

        found = 0;
        for (int i = 0; i < SIZE; i++) {
            if (strstr(list[i].title, keyword) != NULL || strstr(list[i].artist, keyword) != NULL) {
                print_song(list[i]);
                found = 1;
            }
        }
        if (!found) {
            printf("검색 결과가 없습니다.\n");
        }
    }

    return 0;
}