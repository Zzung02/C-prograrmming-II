/*
* 학번 :202110316
*  이름 :김정민
*  프로그램명 :count_digits 정수의 자릿수 구하기 (재귀함수)
*  날짜 :2025/10/15
*/


#include <stdio.h>

// 정수를 매개변수로 받아서, 그 안의 자릿수(숫자 개수)를 재귀로 계산하는 함수
int count_digits(int n)
{
	if (n < 10)       // 한 자리 수면 1 반환
		return 1;
	else
		return 1 + count_digits(n / 10); // n을 10으로 나눈 몫의 자릿수 + 1 반환
}


int main(void)
{
	int num;
	while (1)
	{
		printf("정수 ? ");
		scanf("%d", &num);

			if (num == 0)    // 0 입력 시 종료
				break;

			printf("count of digits: %d\n", count_digits(num));

	}
	return 0;
}

