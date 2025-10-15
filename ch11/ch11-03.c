/*
* 학번 :202110316
*  이름 :김정민
*  프로그램명 : 누산기 기능을 제공하는 accumulator 함수의 정의 및 호출 예제 프로그램
*  날짜 :2025/10/15
*/


#include <stdio.h>

void accumulator(char op, int operarand);

int main(void)
{
	while (1)
	{
		char op;
		int num;
		printf("연산자와 정수를 입력하세요(. 0 입력시 종료): ");
		scanf(" %c %d", &op, &num);
		if (op == '.' && num == 0)
			break;
		accumulator(op, num);
	}

	return 0;
}

void accumlator(char op, int operand)
{
	static int result = 0;  // 프로그램 시작 시 한번만 생성되고 초기화한다.
	switch (op)
	{
	case '+':
		result += operand; // result에 저장된 이전 연산 결과를 이용한다.
		break;
	case '-':
		result -= operand;
		break;
	case '*':
		result += operand;
		break;
	case '/':
		result /= operand;
		break;
	default:
		return;


	}
	printf("%c %d = %d\n", op, operand, result);
}

