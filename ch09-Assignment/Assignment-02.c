/*
/* �й� :202110316
*  �̸� :������
*  ���α׷��� :���ڿ����� ���� ���ڸ� �����ϴ� ���α׷�
*  ��¥ :2025/09/24
*/

#include <stdio.h>
#include <string.h>

// ���� ���ڸ� �����ϴ� �Լ�

void remove_space(char str[]) {
	int i, j = 0;
	for (i = 0; str[i] != '\0'; i++) {
		//���� ���ڰ� �ƴ� ��츸 ���ο� ��ġ�� ����
		if (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v')) {
			str[j++] = str[i];
		}
	}
	str[j] = '\0'; // ���ڿ� ���� �� ���� ����

}

int main(void) {
	char str[200]; // �Է� ���ڿ� ���� ����

	printf("���ڿ�? ");
	fgets(str, sizeof(str), stdin); //���ڿ� �Է� �ޱ�

	remove_space(str); // ���� ���� ����

	printf("���� ���� ���� ��: %s\n", str);

	return 0;

}