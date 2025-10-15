/*
* 학번 :202110316
*  이름 :김정민
*  프로그램명 : fibonacci (static 지역 변수 사용)
*  날짜 :2025/10/15
* 
*/



#include <stdio.h>

// static 지역 변수로 피보나치 값을 저자아는 재귀 함수
int fibonacci(int n)
{
	// static 배열: 함수가 끝나도 값이 유지됨
	static int memo[50];  // 피보나치 결과를 저장할 배열 (최대 50개 항)]


	if (n == 0) return 0; // 0번째 항
	if (n == 1) return 1; // 1번째 항

	// 만약 이때 계산된 값이 있다면 (0보다 크다면) 다시 계산하지않음
	if (memo[n] != 0)
		return memo[n];


	// 계산된 적이 없으면 새로 계산해서 배열에 저장
	memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return memo[n];
}


int main(void)
{
	int i;

		// 0~19번째 항까지 출력

		for (i = 0; i < 20; i++)
			printf("%d ", fibonacci(i));

	return 0;

}



