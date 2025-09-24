/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :입력받은 문자열의 소문자는 대문자로, 대문자는 소문자로 변환하는 프로그램
*  날짜 :2025/09/24
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main(void) {
	char str[200]; // 입력 문자열 저장 공간

	printf("문자열? ");
	fgets(str, sizeof(str), stdin); // 문자열 입력 받기

	// 문자열 전체를 순회하며 대소문자 변환
	for (int i = 0; str[i] != '\0'; i++) {
		if (islower(str[i])) {          //소문자일 경우
			str[i] = toupper(str[i]);   //대문자로 변환
		}
		else if (isupper(str[i])) {   //대문자일 경우
			str[i] = tolower(str[i]);   //소문자로 변환
		}
	}

	printf("변환 후: %s\n", str);

	return 0;
}