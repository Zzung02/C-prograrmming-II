/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :대소문자를 구분하지 않고 문자열을 비교하는 strcmp_ic 함수 작성
*  날짜 :2025/09/24
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h> // tolower 함수 사용

//대소문자 구분 없이 문자열 비교하는 함수
int strcmp_ic(const char* lhs, const char* rhs) {
	while (*lhs != '\0' && *rhs != '\0') {
		// 소문자로 변환 후 비교
		char c1 = tolower(*lhs);
		char c2 = tolower(*rhs);

		if (c1 != c2) {
			return c1 - c2; // 다르면 차이를 반환

		}
		lhs++;
		rhs++;

	}
	return tolower(*lhs) - tolower(*rhs); // 길이 차이가 있으면 처리

}

int main(void) {
	char str1[100], str2[100];

	printf("첫 번째 문자열? ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0'; // 개행 제거

	printf("두 번째 문자열? ");
	fgets(str2, sizeof(str2), stdin); //개행 제거

	int result = strcmp_ic(str1, str2);

	if (result == 0) {
		printf("%s와 %s가 같습니다.\n", str1, str2);
	}
	else if (result < 0) {
		printf("%s가 %s보다 작습니다.\n", str1, str2);
	}
	else {
		printf("%s가 %s보다 큽니다.\n", str1, str2);

	}

	return 0;
}