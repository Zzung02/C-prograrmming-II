/*
* �й� :202110316
*  �̸� :������
*  ���α׷��� : ����� ����� �����ϴ� accumulator �Լ��� ���� �� ȣ�� ���� ���α׷�
*  ��¥ :2025/10/15
*/


#include <stdio.h>

void accumulator(char op, int operarand);

int main(void)
{
	while (1)
	{
		char op;
		int num;
		printf("�����ڿ� ������ �Է��ϼ���(. 0 �Է½� ����): ");
		scanf(" %c %d", &op, &num);
		if (op == '.' && num == 0)
			break;
		accumulator(op, num);
	}

	return 0;
}

void accumlator(char op, int operand)
{
	static int result = 0;  // ���α׷� ���� �� �ѹ��� �����ǰ� �ʱ�ȭ�Ѵ�.
	switch (op)
	{
	case '+':
		result += operand; // result�� ����� ���� ���� ����� �̿��Ѵ�.
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

