/*
* �й� :202110316
*  �̸� :������
*  ���α׷��� : ��� �Լ��� ���� �� ȣ�� ���� ���α׷�
*  ��¥ :2025/10/15
*/


#include <stdio.h>

int get_factorial(int num);

int main(void)
{
	int i;
	

	for (i = 0; i <= 10; i++)     //get_factorial(0)~get_factorial(10)�� ȣ���Ѵ�.
		printf("%2d! = $7d\n", i, get_factorial(i));
		
	return 0;

}

int get_factorial(int num)   // ��� �Լ��� ���ǵ� get_factorial
{
	if (num <= 1)
		return 1;
	return num * get_factorial(num - 1); // get_factorial �Լ��� �ٽ� ȣ���Ѵ�.
}