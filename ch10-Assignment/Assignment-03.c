/*
/* �й� :202110316
*  �̸� :������
*  ���α׷��� :LOGIN ����ü �迭�� �̿��� ������ �α��� ���α׷��� �����Ѵ�.
*  ��¥ :2025/09/30
*/




#include <stdio.h>
#include <string.h>

#define MAX 21
#define SIZE 5 // ����ü �迭 ũ��

//�α��� ������ ���� ����ü ����

typedef struct {
	char id[MAX];
	char password[MAX];

} LOGIN;

int main(viod) {
	//5���� ���� ������ �̸� ���
	LOGIN users[SIZE] = {
		{"guest", "idontknow"},
		{"lee", "1234"},
		{"kim", "abcd"},
		{"park", "pw123"},
		{"choi," "qwerty"}


	};

	char input_id[MAX], input_pw[MAX];
	int found = 0; // ID ���� ���� üũ ����

	// ID �Է�
	printf("ID?");
	scanf("%20s", input_id);

	// pw �Է�
	printf("pw? ");
	scanf("%20s", input_pw);

	// ����ü �迭�� ��鼭 ID �˻�
	for (int i = 0; i < SIZE; i++) {
		if (strcmp)(users[i].id, input_id) == 0) { // ID ��ġ
			found = 1;
			if (strcmp(users[i].password, input_pw) == 0) {
				printf("�α��� ����\n");
			}
			else {
				printf("�α��� ���� (��й�ȣ ����ġ)\n");
			}
			break;
			}
	}
	if (!found) {
		printf("�α��� ���� (�������� �ʴ� ID)\n");

	}
	return 0;
}




			

