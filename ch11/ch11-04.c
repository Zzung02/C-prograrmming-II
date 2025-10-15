/*
/* �й� :202110316
*  �̸� :������
*  ���α׷��� : �ٸ� �ҽ� ���Ͽ� ���ǵ� �Լ��� ȣ�� ���� ���α׷�
*  ��¥ :2025/10/15
*/


// �Լ��� ���Ǹ� ��Ƴ��� �ҽ� ���� func.c

//[func.c]


/*int get_gcd(int x, int y)       //extern�� ������ �Լ� ����
{
	int r;
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;

	}
	return x;
}

extern int get_factorial(int num)   //extern�� ��������� ���� �� �ִ�.
{

	int i;
	int result = 1;

	for (i = 1; i <= num; i++)
		result *= i;
	return result;

 }
 */




//[main.c]

#include <stdio.h>  
#include <stdlib.h> //srand, rand  ȣ�� �� �ʿ�
#include <time.h>   //time ȣ�� �� �ʿ�

//�ٸ� �ҽ� ���Ͽ� ���ǵ� �Լ��� ȣ���Ϸ��� �Լ� ����� �ʿ��ϴ�.
int get_gcd(int x, int y);   //extern�� ������ �Լ� ����
extern int get_factorial(int num); //extern�� ��������� ���� �� �ִ�.

int main(void)
{
	int i;
	srand((unsigned int)time(NULL)); // ������ �õ带 �����Ѵ�.

	//0~9������ ������ ������ ���ؼ� ���丮���� ���Ѵ�.
	for (i = 0; i < 5; i++)
	{
		int num = rand() % 10;
		printf("% 2d! = %7d\n", num, get_factorial(num));
	}

	// 0~99 ������ ������ ���� 2���� ���ؼ� �ִ� ������� ���Ѵ�.
	for (i = 0; i <= 5; i++)
	{
		int a = rand() % 100;
		int b = rand() % 100;
		printf("%2d�� %2d�� GCD = %2d\n", a, b, get_gcd(a, b));
	}

	return 0;

}





