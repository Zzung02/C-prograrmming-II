/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :시저 암호( 영문자만 회전, 음수/양수 키 모두 지원)
*  날짜 :2025/09/24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 입력 문자열 끝의 개행 제거
static void strip_newline(char s[]) {
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') s[len - 1] = '\0';
}

// 시저 암호 함수
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

    printf("문자열? ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        strip_newline(str);
    }

    printf("암호 키 (정수)? ");
    scanf("%d", &key); // 그냥 써도 _CRT_SECURE_NO_WARNINGS 때문에 OK

    caesar_cipher(str, key);
    printf("암호화된 문자열: %s\n", str);

    return 0;
}