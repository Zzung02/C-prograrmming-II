/*
/* �й� :202110316
*  �̸� :������
*  ���α׷��� :�Է¹��� ���ڿ��� �ҹ��ڴ� �빮�ڷ�, �빮�ڴ� �ҹ��ڷ� ��ȯ�ϴ� ���α׷�
*  ��¥ :2025/09/24
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main(void) {
	char str[200]; // �Է� ���ڿ� ���� ����

	printf("���ڿ�? ");
	fgets(str, sizeof(str), stdin); // ���ڿ� �Է� �ޱ�

	// ���ڿ� ��ü�� ��ȸ�ϸ� ��ҹ��� ��ȯ
	for (int i = 0; str[i] != '\0'; i++) {
		if (islower(str[i])) {          //�ҹ����� ���
			str[i] = toupper(str[i]);   //�빮�ڷ� ��ȯ
		}
		else if (isupper(str[i])) {   //�빮���� ���
			str[i] = tolower(str[i]);   //�ҹ��ڷ� ��ȯ
		}
	}

	printf("��ȯ ��: %s\n", str);

	return 0;
}