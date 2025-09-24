/*
/* �й� :202110316
*  �̸� :������
*  ���α׷��� :���� �ܾ� �����ձ� ����
*  ��¥ :2025/09/24
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char prev[100], curr[100];
    int count = 0;

    printf("word? ");
    scanf_s("%99s", prev, (unsigned)sizeof(prev)); // ù ��° �ܾ� �Է�
    count++;

    while (1) {
        printf("word? ");
        scanf_s("%99s", curr, (unsigned)sizeof(curr));

        // "bye" �Է� �� ���� ����
        if (strcmp(curr, "bye") == 0) {
            printf("������ �����մϴ�.\n");
            printf("���� Ƚ��: %d\n", count);
            break;
        }

        // �ܾ� ���̰� 3 �̸��̸� Ż��
        if (strlen(curr) < 3) {
            printf("too short, try again\n");
            continue;
        }

        // �����ձ� ��Ģ Ȯ��
        char last = tolower(prev[strlen(prev) - 1]);  // ���� �ܾ� ������ ����
        char first = tolower(curr[0]);                // ���� �ܾ� ù ����

        if (last != first) {
            printf("WRONG WORD!!! YOU FAILED!!!\n");
            printf("���� Ƚ��: %d\n", count);
            break;
        }

        // ������ ���ڿ� ����
        strcpy_s(prev, sizeof(prev), curr);
        count++;
    }

    return 0;
}