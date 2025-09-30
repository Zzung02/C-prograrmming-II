/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 : 구조체 변수 간의 초기화와 대입
*  날짜 :2025/09/30
*/




#include <stdio.h>
#include <string.h>

struct contach   // 연락처 구조체
{
	char name[20];  //이름
	char phone[20]; //전화번호(01012345678 형식의 문자열로 저장)
	int ringtone;   // 벨 소리 (0~9 선택)
};


int main(void)
{
	struct contact ct = { "김석진", "01011112222", 0 };
	struct contact ct1 = { "전정국", "01012345678", 1 };
	struct contact ct2 = ct1; //구조체 변수로 초기화 할 수 있다.
	printf("ct1으로 초기화 후의 ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	ct2 = ct; // 구조체 변수를 대입할 수 있다.
	printf("ct를 대입한 후의  ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	return 0;



}
