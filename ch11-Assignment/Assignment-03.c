/*
* �й� :202110316
*  �̸� :������
*  ���α׷��� : �Ǻ���ġ ������ n��° �� ���ϱ� (��� �Լ�)
*  ��¥ :2025/10/15
*/

#include <stdio.h>

//�Ǻ���ġ ������ ��� �Լ��� ����ϴ� �Լ�
int fibonacci(int n)
{
	if (n == 0) return 0;  // ù ��
	if (n == 1) return 1;  // �� ��° ��
	return fibonacci(n - 1) + fibonacci(n - 2); // ���� �� ���� ��

}

int main(void)
{

	int i;

	// 0~19��° �ױ��� ���
	for (i = 0; i < 20; i++)
		printf("% d ", fibonacci(i));

	return 0;

}