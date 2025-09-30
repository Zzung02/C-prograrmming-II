/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :SONG 구조체 배열을 기반으로 플레이리스트 기능 구현
*  날짜 :2025/09/30
*/


#include <stdio.h>
#include <string.h>

#define SIZE 8
#define MAX 30
#define PL_SIZE 5  // 플레이리스트 최대 곡 수

// SONG 구조체 정의
typedef struct {
    char title[MAX];
    char artist[MAX];
    char genre[MAX];
    int playtime;
} SONG;

// 곡 출력 함수
void print_song(SONG s) {
    printf("%-2s %-15s %-10s %-8s %d초\n", "", s.title, s.artist, s.genre, s.playtime);
}

// 플레이리스트 출력 함수
void print_playlist(SONG* plist[], int count) {
    int total = 0;
    printf("<< 플레이리스트 >>\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %-15s %-10s %-8s %d초\n",
            i + 1, plist[i]->title, plist[i]->artist, plist[i]->genre, plist[i]->playtime);
        total += plist[i]->playtime;
    }
    printf("총 재생시간: %d초\n", total);
}

int main(void) {
    // 등록된 노래 목록
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

    // 플레이리스트: 구조체 주소를 저장
    SONG* playlist[PL_SIZE] = { NULL };
    int pl_count = 0;

    // 전체 곡 목록 출력
    printf("곡 목록\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d: %-15s %-10s %-8s %d초\n",
            i + 1, list[i].title, list[i].artist, list[i].genre, list[i].playtime);
    }

    int num;
    while (1) {
        printf("플레이리스트에 추가할 곡 번호? ");
        scanf("%d", &num);

        if (num == 0) break; // 0 입력 시 종료

        if (num < 1 || num > SIZE) {
            printf("잘못된 번호입니다.\n");
            continue;
        }

        if (pl_count >= PL_SIZE) {
            printf("플레이리스트가 가득 찼습니다.\n");
            continue;
        }

        // 선택한 노래 주소를 플레이리스트에 저장
        playlist[pl_count++] = &list[num - 1];

        // 플레이리스트 출력
        print_playlist(playlist, pl_count);
    }

    return 0;
}