/*
* �й� :202110316
*  �̸� :������
*  ���α׷��� :count_digits ������ �ڸ��� ���ϱ� (����Լ�)
*  ��¥ :2025/10/15
*/


#include <stdio.h>

// ������ �Ű������� �޾Ƽ�, �� ���� �ڸ���(���� ����)�� ��ͷ� ����ϴ� �Լ�
int count_digits(int n)
{
	if (n < 10)       // �� �ڸ� ���� 1 ��ȯ
		return 1;
	else
		return 1 + count_digits(n / 10); // n�� 10���� ���� ���� �ڸ��� + 1 ��ȯ
}


int main(void)
{
	int num;
	while (1)
	{
		printf("���� ? ");
		scanf("%d", &num);

			if (num == 0)    // 0 �Է� �� ����
				break;

			printf("count of digits: %d\n", count_digits(num));

	}
	return 0;
}

