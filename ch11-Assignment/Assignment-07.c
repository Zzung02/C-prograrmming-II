/*
* 학번 :202110316
*  이름 :김정민
*  프로그램명 :함수 포인터 개념 사용 문제
*  날짜 :2025/10/15
*/



#include <stdio.h>

// 1. 피보나치 함수

int fibonacci(int n)
{
	if (n <= 1)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}


// 2. 거듭제곱(power) 함수
int power(int base, int exp)
{
	if (exp == 0)
		return 1;
	else
		return base * power(base, exp - 1);

}


// 3. 메인 함수

int main(void)
{
	int n, base, exp;

	// (1) 직접 함수 포인터 변수를 선언하는 방법

	int (*pf1)(int) = fibonacci;     //매개변수 1개짜리 함수
	int (*pf2)(int, int) = power;    //매개변수 2개짜리 함수

	printf("피보나치 수열 n 입력: ");
	scanf("%d", &n);
	printf("밑(base)과 지수(exponent) 입력: ");
	scanf("%d %d", &base, &exp);



	// (2) 포인터를 이용해 함수 호출
	printf("\n[함수 포인터 호출 결과]\n");
	printf("fibonacci(%d) = %d\n", n, pf1(n));
	printf("power(%d, %d) = %d\n", base, exp, pf2(base, exp));

	// (3) 다른 방법 - typedf로 함수 포인터형 정의 후 사용
	typedef int (*PF_PIB)(int);
	typedef int (*PF_PWR)(int, int);

	PF_PIB fib_ptr = fibonacci;
	PF_PWR pow_ptr = power;

	printf("\n[typedef 이용한 함수 포인터 호출 결과]\n");
	printf("fibonacci(%d) = %d\n", n, fib_ptr(n));
	printf("power(%d, %d) = %d\n", base, exp, pow_ptr(base, exp));

	return 0;
}