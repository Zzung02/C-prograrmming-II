/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :
*  날짜 :2025/09/24
*/


#include <stdio.h>
#include <string.h>

// 문자열을 왼쪽으로 k칸 회전

void rotate_left(char str[], int k) {
	size_t n = strlen(str);
	if (n == 0) return;


	k %= n; // 문자열 길이보다 클 경우 나머지 처리
	char temp[200];

	strncpy_s(temp, sizeof(temp), str + k, n - k);// 뒤쪽 복사
	strncat_s(temp, sizeof(temp), str, k);
	strcpy_s(str, sizeof(temp), temp);
}

int main(void) {
	char str[200];
	int k;

	printf("문자열? ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0'; // 개행 제거

	printf("이동할 글자 수? ");
	scanf_s("%d", &k);

	if (k > 0) { // 양수 -> 왼쪽 회전
		rotate_left(str, k);
	}
	else if (k < 0) { // 음수 -> 오른쪽 회전
		rotate_left(str, strlen(str) + k); // 오른쪽 회전은 왼쪽 회전으로 변환

	}

	printf("%s\n", str);

	return 0;

}