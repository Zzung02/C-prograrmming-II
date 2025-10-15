/*
* 학번 :202110316
*  이름 :김정민
*  프로그램명 : get_gcd 함수의 정의 및 호출 예제 프로그램
*  날짜 :2025/10/15
*/

#include <stdio.h>

int get_gcd(int x, int y);

int main(void)
{
	int a = 0, b = 0;

	while (1)
	{
		printf("2개의 정수(0 0 입력 시 종료)? ");
		scanf("%d %d", &a, &b);

		if (a == 0 && b == 0)
			break;
		printf("%d와 %d의 GCD = %d\n", a, b, get_gcd(a, b));
	}

	return 0;
}

int get_gcd(int x, int y)  // 재귀 함수로 정의된 get_gcd
{
	if (x % y == 0)
		return y;
	return get_gcd(y, x % y);


}