/*
* �й� :202110316
*  �̸� :������
*  ���α׷��� :���� ������ extern ���� ���� ���α׷�
*  ��¥ :2025/10/15
*/

//test.c

/*#include <stdio.h>

int global = 123;  // ������ �����̸鼭 ����(�޸� �Ҵ� �� �ʱ�ȭ)

void test_global(void)
{
	global++;

}
*/





// main.c

#include <stdio.h>

void test_global(void);  // �ٸ� �ҽ� ������ �Լ��� ȣ���Ϸ��� �Լ� ���� �ʿ�]

extern int global;   // 'global�̶�� ������ �ִ�.' ��� �˷��ش�.

int main(void)
{
	test_global;
	printf("global = %d\n", global);

	return 0;
}