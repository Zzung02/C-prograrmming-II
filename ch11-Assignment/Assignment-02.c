/*
* �й� :202110316
*  �̸� :������
*  ���α׷��� : sum_of_digits ������ �� �ڸ��� �� ���ϱ� (����Լ�)
*  ��¥ :2025/10/15
*/




#include <stdio.h>

// ������ �޾Ƽ� �� �ڸ��� ���� ��ͷ� ����ϴ� �Լ�
int sum_of_digits(int n)
{

	if (n < 10)   // �� �ڸ� ���� �״�� ��ȯ
		return n;
	else
		return (n % 10) + sum_of_digits(n / 10); // ���ڸ� ���ϰ�, ������ �ڸ� ���� ��ͷ� ���

}

int main(void)
{
	int num;
	while (1)
	{
		printf("���� ? ");
		scanf("%d", &num);

		if (num == 0)     // 0 �Է� �� ����
			break;

		printf("sum of digits: %d\n", sum_of_digits(num));

	}
	return 0;
}