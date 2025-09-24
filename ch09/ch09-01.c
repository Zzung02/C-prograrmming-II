/*
/* �й� :202110316
*  �̸� :������
*  ���α׷��� :Ű����κ��� ���ڵ带 �Է¹޾� ����ü �迭�� ���� �� ���
*  ��¥ :2025/09/24
*/



//����:Ű����κ��� ���� ���ڵ带 �� �� �Է� �޾� �ʵ带
//�����Ͽ� ����ü �迭�� ������ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���ڵ� ����: �̸� | �й� | �а� | �г�(����)
//�Է� ���� ����: :"exit" �Է�




struct Student {
	char name[24];
	char id[16];
	char major[32];
	int year;

};

typedef struct Student Student;
//�Լ� ���� ����

/*
���ϸ�: ch09-01.c
����: Ű����κ��� ���ڵ带 �Է¹޾� ����ü �迭�� ���� �� ���
�ۼ���: ������
��¥: 2025.09.24
����: v1.1
*/

#define _CRT_SECURE_NO_WARNINGS   // VS strcpy, strtok ��� ����
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100   // �ִ� �л� ��
#define SIZE 200  // �Է� ���ڿ� ũ��

// ===== ����ü ���� =====
typedef struct {
    char name[24];    // �̸�
    char id[16];      // �й�
    char major[32];   // �а�
    int year;         // �г�
} Student;

// ===== �Լ� ���� ���� =====
int inputRecords(Student students[], int max);
void printRecords(Student students[], int count);

// ===== main �Լ� =====
int main(void) {
    Student students[MAX];
    int count;

    count = inputRecords(students, MAX);
    printRecords(students, count);

    return 0;
}

// ===== ���ڵ� �Է� =====
int inputRecords(Student students[], int max) {
    char input[SIZE];
    int count = 0;

    printf("�л� ������ �Է��ϼ��� (����: �̸�|�й�|�а�|�г�)\n");
    printf("�Է��� �����Ϸ��� 'exit' �Է�\n");

    while (1) {
        printf(">> ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';  // ���� ����

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
            printf("?? �ִ� �л� �� �ʰ�!\n");
            break;
        }
    }
    return count;
}

// ===== ���ڵ� ��� =====
void printRecords(Student students[], int count) {
    printf("\n=== �Էµ� �л� ���� ===\n");
    for (int i = 0; i < count; i++) {
        printf("�̸�: %s, �й�: %s, �а�: %s, �г�: %d\n",
            students[i].name,
            students[i].id,
            students[i].major,
            students[i].year);
    }
}
