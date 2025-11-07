

/*
* 학번 :202110316
*  이름 :김정민
*  프로그램명 : static 지역 변수로 성능 개선
*  날짜 :2025/10/15
*/


#include <stdio.h>

// 거듭제곱 값을 미리 저장할 2차원 배열
// 최대 bass 10, exponent 10까지 계산 가능
int power_table[11][11] = { 0 };

// 재귀 + static 테이블을 이용한 power 함수
int power(int base, int exp)
{
	// 이미 계산된 값이 있다면 (0이 아니면) 바로 반환
	if (power_table[base][exp] != 0)
		return power_table[base][exp];

	// 종료 조건: ㅜ^0  = 1
	if (exp == 0)
		return 1;


	// 아직 계산되지 않은 경우, 재귀로 계산 후 배열에 저장
	power_table[base][exp] = base * power(base, exp - 1);

	return power_table[base][exp];

}

int main(void)
{
	int base, i;
	printf("밑(base)? ");
	scanf("%d", &base);

	// 0제곱부터 10제곱까지 출력
	for (i = 0; i <= 10; i++)
		printf("%d ^ %d = %d\n", base, i, power(base, i));
	
	return 0;

}





