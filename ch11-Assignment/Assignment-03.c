/*
* 학번 :202110316
*  이름 :김정민
*  프로그램명 : 피보나치 수열의 n번째 항 구하기 (재귀 함수)
*  날짜 :2025/10/15
*/

#include <stdio.h>

//피보나치 수열을 재귀 함수로 계산하는 함수
int fibonacci(int n)
{
	if (n == 0) return 0;  // 첫 항
	if (n == 1) return 1;  // 두 번째 항
	return fibonacci(n - 1) + fibonacci(n - 2); // 앞의 두 항의 합

}

int main(void)
{

	int i;

	// 0~19번째 항까지 출력
	for (i = 0; i < 20; i++)
		printf("% d ", fibonacci(i));

	return 0;

}