/*
/* �й� :202110316
*  �̸� :������
*  ���α׷��� :LOGIN ����ü�� �����ϰ�, ����ڷκ��� ���̵�� ��й�ȣ�� �Է¹޾� ����ϴ� ���α׷�.
*  ��¥ :2025/09/30
*/ 




#include <stdio.h>
#include <string.h>

#define MAX 21 // �ִ� �Է� ���� (20���� + NULL)

typedef struct {
	char id[MAX]; // ���̵�
	char password[MAX]; //��й�ȣ
}LOGIN;

int main(void) {

}LOGIN;

int main(void) {
	LOGIN user = { 0 }; // ����ü �ʱ�ȭ

	//���̵� �Է�
	printf("ID?");
	scanf("%20s", user.id);

	//��й�ȣ �Է�
	printf("password? ");
	scanf("%20s", user.password);

	//���̵� ���
	printf("ID: %s\n", user.id);

	// ��й�ȣ�� ���� ����ŭ + ���
	printf("pw: ");
	for (int i = 0; i < strlen(user.password); i++) {
		printf("*");

	}
	printf("\n");

	return 0;


}