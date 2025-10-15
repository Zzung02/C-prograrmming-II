/*
* �й� :202110316
*  �̸� :������
*  ���α׷��� : fibonacci (static ���� ���� ���)
*  ��¥ :2025/10/15
* 
*/



#include <stdio.h>

// static ���� ������ �Ǻ���ġ ���� ���ھƴ� ��� �Լ�
int fibonacci(int n)
{
	// static �迭: �Լ��� ������ ���� ������
	static int memo[50];  // �Ǻ���ġ ����� ������ �迭 (�ִ� 50�� ��)]


	if (n == 0) return 0; // 0��° ��
	if (n == 1) return 1; // 1��° ��

	// ���� �̶� ���� ���� �ִٸ� (0���� ũ�ٸ�) �ٽ� �����������
	if (memo[n] != 0)
		return memo[n];


	// ���� ���� ������ ���� ����ؼ� �迭�� ����
	memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return memo[n];
}


int main(void)
{
	int i;

		// 0~19��° �ױ��� ���

		for (i = 0; i < 20; i++)
			printf("%d ", fibonacci(i));

	return 0;

}



