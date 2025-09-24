/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :문자열에서 공백 문자를 제거하는 프로그램
*  날짜 :2025/09/24
*/

#include <stdio.h>
#include <string.h>

// 공백 문자를 제거하는 함수

void remove_space(char str[]) {
	int i, j = 0;
	for (i = 0; str[i] != '\0'; i++) {
		//공백 문자가 아닐 경우만 새로운 위치에 저장
		if (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v')) {
			str[j++] = str[i];
		}
	}
	str[j] = '\0'; // 문자열 끝에 널 문자 삽입

}

int main(void) {
	char str[200]; // 입력 문자열 저장 공간

	printf("문자열? ");
	fgets(str, sizeof(str), stdin); //문자열 입력 받기

	remove_space(str); // 공백 제거 실행

	printf("공백 문자 제거 후: %s\n", str);

	return 0;

}