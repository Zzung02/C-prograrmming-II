/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :LOGIN 구조체를 정의하고, 사용자로부터 아이디와 비밀번호를 입력받아 출력하는 프로그램.
*  날짜 :2025/09/30
*/ 




#include <stdio.h>
#include <string.h>

#define MAX 21 // 최대 입력 길이 (20글자 + NULL)

typedef struct {
	char id[MAX]; // 아이디
	char password[MAX]; //비밀번호
}LOGIN;

int main(void) {

}LOGIN;

int main(void) {
	LOGIN user = { 0 }; // 구조체 초기화

	//아이디 입력
	printf("ID?");
	scanf("%20s", user.id);

	//비밀번호 입력
	printf("password? ");
	scanf("%20s", user.password);

	//아이디 출력
	printf("ID: %s\n", user.id);

	// 비밀번호는 글자 수만큼 + 출력
	printf("pw: ");
	for (int i = 0; i < strlen(user.password); i++) {
		printf("*");

	}
	printf("\n");

	return 0;


}