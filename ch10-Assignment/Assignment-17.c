
/* �й� :202110316
*  �̸� :������
*  ���α׷��� :�뷡 ���� ���α׷� (����/���� �˻� ���)
*  ��¥ :2025/09/30
*/



#include <stdio.h>
#include <string.h>

#define SIZE 8
#define MAX 30

// SONG ����ü ����
typedef struct {
    char title[MAX];   // ���
    char artist[MAX];  // ������
    char genre[MAX];   // �帣
    int playtime;      // ����ð� (��)
} SONG;

// �� ���� ��� �Լ�
void print_song(SONG s) {
    printf("%-15s %-10s %-8s %d��\n", s.title, s.artist, s.genre, s.playtime);
}

int main(void) {
    // �뷡 ������ (���� ���� ���)
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

    char keyword[MAX];
    int found;

    while (1) {
        printf("Ű����(����/��Ƽ��Ʈ)? ");
        scanf("%s", keyword);

        // �Է��� "!" �̸� ����
        if (strcmp(keyword, "!") == 0) break;

        found = 0;
        for (int i = 0; i < SIZE; i++) {
            if (strstr(list[i].title, keyword) != NULL || strstr(list[i].artist, keyword) != NULL) {
                print_song(list[i]);
                found = 1;
            }
        }
        if (!found) {
            printf("�˻� ����� �����ϴ�.\n");
        }
    }

    return 0;
}