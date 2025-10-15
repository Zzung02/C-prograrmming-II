/*
* �й� :202110316
*  �̸� :������
*  ���α׷��� : ��� �Լ��� �ŵ����� ���ϱ�
*  ��¥ :2025/10/15
*/

#include <stdio.h>

//��� �Լ��� �̿��� base^exp(�ŵ�����)�� ����ϴ� �Լ�

int power(int base, int exp)
{
    // �⺻ ���� (���� ����)
    if (exp == 0)
        return 1; // � ���� 0������ 1

    // ��� ȣ��
    return base * power(base, exp - 1);
    // ��: power(2, 3) = 2 * power(2, 2)
    //                     = 2 * 2 power(2, 1)
    //                     = 2 * 2 * 2 power(2, 0)  
    //                     = 2 * 2 * 2 * 1 = 8

}

int main(void)
{

    int base, i;

    printf("��(base)? ");
    scanf("%d", &base); // �� �Է�

    // 0^0 ~ base^10 ���� ���
    for (i = 0; i <= 10; i++)
        printf("%d ^ %d = %d\n", base, i, power(base, i));

    return 0;


}
