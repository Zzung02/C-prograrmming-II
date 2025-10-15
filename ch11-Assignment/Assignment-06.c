/*
* �й� :202110316
*  �̸� :������
*  ���α׷��� : static ���� ������ ���� ����
*  ��¥ :2025/10/15
*/


#include <stdio.h>

// �ŵ����� ���� �̸� ������ 2���� �迭
// �ִ� bass 10, exponent 10���� ��� ����
int power_table[11][11] = { 0 };

// ��� + static ���̺��� �̿��� power �Լ�
int power(int base, int exp)
{
	// �̹� ���� ���� �ִٸ� (0�� �ƴϸ�) �ٷ� ��ȯ
	if (power_table[base][exp] != 0)
		return power_table[base][exp];

	// ���� ����: ��^0  = 1
	if (exp == 0)
		return 1;


	// ���� ������ ���� ���, ��ͷ� ��� �� �迭�� ����
	power_table[base][exp] = base * power(base, exp - 1);

	return power_table[base][exp];

}

int main(void)
{
	int base, i;
	printf("��(base)? ");
	scanf("%d", &base);

	// 0�������� 10�������� ���
	for (i = 0; i <= 10; i++)
		printf("%d ^ %d = %d\n", base, i, power(base, i));
	
	return 0;

}





