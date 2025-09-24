/* �й� :202110316
*  �̸� :������
*  ���α׷��� :�ߺ� ���� ����(set) ����
*  ��¥ :2025/09/24
*/

#include <stdio.h>

#define MAX 10

int exists(int set[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (set[i] == value) return 1; // �̹� ����
    }
    return 0;
}

void print_set(int set[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", set[i]);
    }
    printf("\n");
}

int main() {
    int set[MAX];
    int size = 0;
    int value;

    while (size < MAX) {
        printf("�迭�� �߰��� ����? ");
        if (scanf_s("%d", &value) != 1) break;

        if (exists(set, size, value)) {
            printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", value);
        }
        else {
            set[size++] = value;
            print_set(set, size);
        }
    }

    return 0;
}