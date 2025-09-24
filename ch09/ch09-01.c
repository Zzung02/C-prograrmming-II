/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 : 
*  날짜 :2025/09/24
*/



//문제:키보드로부터 다음 레코드를 한 줄 입력 받아 필드를
//구분하여 구조체 배열에 저장한 후 출력하는 프로그램을 작성하시오.
//레코드 형식: 이름 | 학번 | 학과 | 학년(정수)
//입력 종료 조건: :"exit" 입력

struct Student {
	char name[24];
	char id[16];
	char major[32];
	int year;

};

typedef struct Student Student;
//함수 원형 선언


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100 //최대 학생 수






