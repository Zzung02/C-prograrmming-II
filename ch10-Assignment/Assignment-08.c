/*
/* �й� :202110316
*  �̸� :������
*  ���α׷��� :PRODUCT ����ü�� �����ϰ�, �Ű������� ���޹޾� ����ϴ� ���α׷�
*  ��¥ :2025/09/30
*/


#include <stdio.h>
#include <string.h>

#define MAX 30 // ��ǰ�� �ִ� ����
typedef struct {
	char name[MAX]; //��ǰ��
	int price;      // ����
	int stock;      //���

}PRODUCT;

// ��ǰ ������ ����ϴ� �Լ�
void print_product(PRODUCT p) {
	printf("[%s %d�� ���:%d]\n", p.name, p.price, p.stock);

}

int main(void) {
	PRODUCT item; // ����ü ���� ����

	//����� �Է�
	printf("��ǰ��? ");
	scanf("%s", item.name);

	printf("����? ");
	scanf("%d", &item.price);

	printf("���? ");
	scanf("%d, &item.stock");

	//���
	print_product(item);

	return 0;

}