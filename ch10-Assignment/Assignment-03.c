/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :LOGIN 구조체 배열을 이용해 간단한 로그인 프로그램을 구현한다.
*  날짜 :2025/09/30
*/




#include <stdio.h>
#include <string.h>

#define MAX 21
#define SIZE 5 // 구조체 배열 크기

//로그인 정보를 달을 구조체 정의

typedef struct {
	char id[MAX];
	char password[MAX];

} LOGIN;

int main(viod) {
	//5개의 계정 정보를 미리 등록
	LOGIN users[SIZE] = {
		{"guest", "idontknow"},
		{"lee", "1234"},
		{"kim", "abcd"},
		{"park", "pw123"},
		{"choi," "qwerty"}


	};

	char input_id[MAX], input_pw[MAX];
	int found = 0; // ID 존재 여부 체크 변수

	// ID 입력
	printf("ID?");
	scanf("%20s", input_id);

	// pw 입력
	printf("pw? ");
	scanf("%20s", input_pw);

	// 구조체 배열을 들면서 ID 검색
	for (int i = 0; i < SIZE; i++) {
		if (strcmp)(users[i].id, input_id) == 0) { // ID 일치
			found = 1;
			if (strcmp(users[i].password, input_pw) == 0) {
				printf("로그인 성공\n");
			}
			else {
				printf("로그인 실패 (비밀번호 불일치)\n");
			}
			break;
			}
	}
	if (!found) {
		printf("로그인 실패 (존재하지 않는 ID)\n");

	}
	return 0;
}




			

