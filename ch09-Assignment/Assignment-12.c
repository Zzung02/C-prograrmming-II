/*
/* �й� :202110316
*  �̸� :������
*  ���α׷��� :
*  ��¥ :2025/09/24
*/


#include <stdio.h>
#include <string.h>

// ���ڿ��� �������� kĭ ȸ��

void rotate_left(char str[], int k) {
	size_t n = strlen(str);
	if (n == 0) return;


	k %= n; // ���ڿ� ���̺��� Ŭ ��� ������ ó��
	char temp[200];

	strncpy_s(temp, sizeof(temp), str + k, n - k);// ���� ����
	strncat_s(temp, sizeof(temp), str, k);
	strcpy_s(str, sizeof(temp), temp);
}

int main(void) {
	char str[200];
	int k;

	printf("���ڿ�? ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0'; // ���� ����

	printf("�̵��� ���� ��? ");
	scanf_s("%d", &k);

	if (k > 0) { // ��� -> ���� ȸ��
		rotate_left(str, k);
	}
	else if (k < 0) { // ���� -> ������ ȸ��
		rotate_left(str, strlen(str) + k); // ������ ȸ���� ���� ȸ������ ��ȯ

	}

	printf("%s\n", str);

	return 0;

}