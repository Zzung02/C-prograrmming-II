/*
* 학번 :202110316
*  이름 :김정민
*  프로그램명 : 재귀 함수로 거듭제곱 구하기
*  날짜 :2025/10/15
*/

#include <stdio.h>

//재귀 함수를 이용해 base^exp(거듭제곱)을 계산하는 함수

int power(int base, int exp)
{
    // 기본 조건 (종료 조건)
    if (exp == 0)
        return 1; // 어떤 수든 0제곱은 1

    // 재귀 호출
    return base * power(base, exp - 1);
    // 예: power(2, 3) = 2 * power(2, 2)
    //                     = 2 * 2 power(2, 1)
    //                     = 2 * 2 * 2 power(2, 0)  
    //                     = 2 * 2 * 2 * 1 = 8

}

int main(void)
{

    int base, i;

    printf("밑(base)? ");
    scanf("%d", &base); // 밑 입력

    // 0^0 ~ base^10 까지 출력
    for (i = 0; i <= 10; i++)
        printf("%d ^ %d = %d\n", base, i, power(base, i));

    return 0;


}
