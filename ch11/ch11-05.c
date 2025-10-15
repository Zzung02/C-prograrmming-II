/*
* 학번 :202110316
*  이름 :김정민
*  프로그램명 : 재귀 함수의 정의 및 호출 예제 프로그램
*  날짜 :2025/10/15
*/


#include <stdio.h>

int get_factorial(int num);

int main(void)
{
	int i;
	

	for (i = 0; i <= 10; i++)     //get_factorial(0)~get_factorial(10)을 호출한다.
		printf("%2d! = $7d\n", i, get_factorial(i));
		
	return 0;

}

int get_factorial(int num)   // 재귀 함수로 정의된 get_factorial
{
	if (num <= 1)
		return 1;
	return num * get_factorial(num - 1); // get_factorial 함수를 다시 호출한다.
}