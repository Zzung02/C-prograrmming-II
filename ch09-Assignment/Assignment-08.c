/*
/* �й� :202110316
*  �̸� :������
*  ���α׷��� :���� ��ȣ( �����ڸ� ȸ��, ����/��� Ű ��� ����)
*  ��¥ :2025/09/24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// �Է� ���ڿ� ���� ���� ����
static void strip_newline(char s[]) {
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') s[len - 1] = '\0';
}

// ���� ��ȣ �Լ�
void caesar_cipher(char str[], int key) {
    int shift = ((key % 26) + 26) % 26;
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            str[i] = (char)(((ch - base + shift) % 26) + base);
        }
    }
}

int main(void) {
    char str[200];
    int key;

    printf("���ڿ�? ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        strip_newline(str);
    }

    printf("��ȣ Ű (����)? ");
    scanf("%d", &key); // �׳� �ᵵ _CRT_SECURE_NO_WARNINGS ������ OK

    caesar_cipher(str, key);
    printf("��ȣȭ�� ���ڿ�: %s\n", str);

    return 0;
}