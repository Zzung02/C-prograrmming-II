/*
* 학번 :202110316
*  이름 :김정민
*  프로그램명 :전역 변수의 extern 선언 예제 프로그램
*  날짜 :2025/10/15
*/

//test.c

/*#include <stdio.h>

int global = 123;  // 변수의 선언이면서 정의(메모리 할당 및 초기화)

void test_global(void)
{
	global++;

}
*/





// main.c

#include <stdio.h>

void test_global(void);  // 다른 소스 파일의 함수를 호출하려면 함수 선언 필요]

extern int global;   // 'global이라는 변수가 있다.' 라고 알려준다.

int main(void)
{
	test_global;
	printf("global = %d\n", global);

	return 0;
}