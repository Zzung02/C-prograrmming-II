/*
/* �й� :202110316
*  �̸� :������
*  ���α׷��� :���ϸ�� Ȯ���ڸ� �Է¹޾� ��ü ���ϸ��� ����ϴ� ���α׷�
*  ��¥ :2025/09/24
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[100];
    char ext[20];
    char full[120];

    printf("���ϸ�? ");
    scanf_s("%s", filename, (unsigned)(sizeof(filename) / sizeof(filename[0])));

    printf("Ȯ����? ");
    scanf_s("%s", ext, (unsigned)(sizeof(ext) / sizeof(ext[0])));

    // ���ϸ� + '.' + Ȯ���� ��ġ��
    sprintf_s(full, sizeof(full), "%s.%s", filename, ext);

    printf("��ü ���ϸ�: %s\n", full);

    return 0;
}