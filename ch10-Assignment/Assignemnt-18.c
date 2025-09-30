/*
/* �й� :202110316
*  �̸� :������
*  ���α׷��� :SONG ����ü �迭�� ������� �÷��̸���Ʈ ��� ����
*  ��¥ :2025/09/30
*/


#include <stdio.h>
#include <string.h>

#define SIZE 8
#define MAX 30
#define PL_SIZE 5  // �÷��̸���Ʈ �ִ� �� ��

// SONG ����ü ����
typedef struct {
    char title[MAX];
    char artist[MAX];
    char genre[MAX];
    int playtime;
} SONG;

// �� ��� �Լ�
void print_song(SONG s) {
    printf("%-2s %-15s %-10s %-8s %d��\n", "", s.title, s.artist, s.genre, s.playtime);
}

// �÷��̸���Ʈ ��� �Լ�
void print_playlist(SONG* plist[], int count) {
    int total = 0;
    printf("<< �÷��̸���Ʈ >>\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %-15s %-10s %-8s %d��\n",
            i + 1, plist[i]->title, plist[i]->artist, plist[i]->genre, plist[i]->playtime);
        total += plist[i]->playtime;
    }
    printf("�� ����ð�: %d��\n", total);
}

int main(void) {
    // ��ϵ� �뷡 ���
    SONG list[SIZE] = {
        {"thank u, next", "Ariana Grande", "pop", 208},
        {"Attention", "Charlie Puth", "pop", 211},
        {"�� ���� ����", "�ں���", "ballad", 316},
        {"How Long", "Charlie Puth", "pop", 198},
        {"I��m Fine", "��ź�ҳ��", "hip-hop", 209},
        {"����", "��ź�ҳ��", "hip-hop", 274},
        {"Awake", "��ź�ҳ��", "ballad", 226},
        {"�Ƴ���", "MINO", "hip-hop", 241}
    };

    // �÷��̸���Ʈ: ����ü �ּҸ� ����
    SONG* playlist[PL_SIZE] = { NULL };
    int pl_count = 0;

    // ��ü �� ��� ���
    printf("�� ���\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d: %-15s %-10s %-8s %d��\n",
            i + 1, list[i].title, list[i].artist, list[i].genre, list[i].playtime);
    }

    int num;
    while (1) {
        printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
        scanf("%d", &num);

        if (num == 0) break; // 0 �Է� �� ����

        if (num < 1 || num > SIZE) {
            printf("�߸��� ��ȣ�Դϴ�.\n");
            continue;
        }

        if (pl_count >= PL_SIZE) {
            printf("�÷��̸���Ʈ�� ���� á���ϴ�.\n");
            continue;
        }

        // ������ �뷡 �ּҸ� �÷��̸���Ʈ�� ����
        playlist[pl_count++] = &list[num - 1];

        // �÷��̸���Ʈ ���
        print_playlist(playlist, pl_count);
    }

    return 0;
}