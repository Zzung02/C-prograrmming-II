/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 : 다른 소스 파일에 정의된 함수의 호출 예제 프로그램
*  날짜 :2025/10/15
*/


// 함수의 정의를 모아놓은 소슬 파일 func.c

//[func.c]


/*int get_gcd(int x, int y)       //extern이 생략된 함수 정의
{
	int r;
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;

	}
	return x;
}

extern int get_factorial(int num)   //extern을 명시적으로 써줄 수 있다.
{

	int i;
	int result = 1;

	for (i = 1; i <= num; i++)
		result *= i;
	return result;

 }
 */




//[main.c]

#include <stdio.h>  
#include <stdlib.h> //srand, rand  호출 시 필요
#include <time.h>   //time 호출 시 필요

//다른 소스 파일에 정의된 함수를 호출하려면 함수 선언니 필요하다.
int get_gcd(int x, int y);   //extern이 생략된 함수 선언
extern int get_factorial(int num); //extern을 명시적으로 써줄 수 있다.

int main(void)
{
	int i;
	srand((unsigned int)time(NULL)); // 난수의 시드를 지정한다.

	//0~9사이의 임의의 정수에 대해서 팩토리얼을 구한다.
	for (i = 0; i < 5; i++)
	{
		int num = rand() % 10;
		printf("% 2d! = %7d\n", num, get_factorial(num));
	}

	// 0~99 사이의 임의의 정수 2개에 대해서 최대 공약수를 구한다.
	for (i = 0; i <= 5; i++)
	{
		int a = rand() % 100;
		int b = rand() % 100;
		printf("%2d와 %2d의 GCD = %2d\n", a, b, get_gcd(a, b));
	}

	return 0;

}





