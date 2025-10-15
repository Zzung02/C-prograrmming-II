/*
* 학번 :202110316
*  이름 :김정민
*  프로그램명 : sum_of_digits 정수의 각 자리수 합 구하기 (재귀함수)
*  날짜 :2025/10/15
*/




#include <stdio.h>

// 정수를 받아서 각 자리의 합을 재귀로 계산하는 함수
int sum_of_digits(int n)
{

	if (n < 10)   // 한 자리 수면 그대로 반환
		return n;
	else
		return (n % 10) + sum_of_digits(n / 10); // 끝자리 더하고, 나머지 자리 합을 재귀로 계산

}

int main(void)
{
	int num;
	while (1)
	{
		printf("정수 ? ");
		scanf("%d", &num);

		if (num == 0)     // 0 입력 시 종료
			break;

		printf("sum of digits: %d\n", sum_of_digits(num));

	}
	return 0;
}