/*
* �й� :202110316
*  �̸� :������
*  ���α׷��� :�Լ� ������ ���� ��� ����
*  ��¥ :2025/10/15
*/



#include <stdio.h>

// 1. �Ǻ���ġ �Լ�

int fibonacci(int n)
{
	if (n <= 1)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}


// 2. �ŵ�����(power) �Լ�
int power(int base, int exp)
{
	if (exp == 0)
		return 1;
	else
		return base * power(base, exp - 1);

}


// 3. ���� �Լ�

int main(void)
{
	int n, base, exp;

	// (1) ���� �Լ� ������ ������ �����ϴ� ���

	int (*pf1)(int) = fibonacci;     //�Ű����� 1��¥�� �Լ�
	int (*pf2)(int, int) = power;    //�Ű����� 2��¥�� �Լ�

	printf("�Ǻ���ġ ���� n �Է�: ");
	scanf("%d", &n);
	printf("��(base)�� ����(exponent) �Է�: ");
	scanf("%d %d", &base, &exp);



	// (2) �����͸� �̿��� �Լ� ȣ��
	printf("\n[�Լ� ������ ȣ�� ���]\n");
	printf("fibonacci(%d) = %d\n", n, pf1(n));
	printf("power(%d, %d) = %d\n", base, exp, pf2(base, exp));

	// (3) �ٸ� ��� - typedf�� �Լ� �������� ���� �� ���
	typedef int (*PF_PIB)(int);
	typedef int (*PF_PWR)(int, int);

	PF_PIB fib_ptr = fibonacci;
	PF_PWR pow_ptr = power;

	printf("\n[typedef �̿��� �Լ� ������ ȣ�� ���]\n");
	printf("fibonacci(%d) = %d\n", n, fib_ptr(n));
	printf("power(%d, %d) = %d\n", base, exp, pow_ptr(base, exp));

	return 0;
}