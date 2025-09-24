/*
/* �й� :202110316
*  �̸� :������
*  ���α׷��� :��ҹ��ڸ� �������� �ʰ� ���ڿ��� ���ϴ� strcmp_ic �Լ� �ۼ�
*  ��¥ :2025/09/24
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h> // tolower �Լ� ���

//��ҹ��� ���� ���� ���ڿ� ���ϴ� �Լ�
int strcmp_ic(const char* lhs, const char* rhs) {
	while (*lhs != '\0' && *rhs != '\0') {
		// �ҹ��ڷ� ��ȯ �� ��
		char c1 = tolower(*lhs);
		char c2 = tolower(*rhs);

		if (c1 != c2) {
			return c1 - c2; // �ٸ��� ���̸� ��ȯ

		}
		lhs++;
		rhs++;

	}
	return tolower(*lhs) - tolower(*rhs); // ���� ���̰� ������ ó��

}

int main(void) {
	char str1[100], str2[100];

	printf("ù ��° ���ڿ�? ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0'; // ���� ����

	printf("�� ��° ���ڿ�? ");
	fgets(str2, sizeof(str2), stdin); //���� ����

	int result = strcmp_ic(str1, str2);

	if (result == 0) {
		printf("%s�� %s�� �����ϴ�.\n", str1, str2);
	}
	else if (result < 0) {
		printf("%s�� %s���� �۽��ϴ�.\n", str1, str2);
	}
	else {
		printf("%s�� %s���� Ů�ϴ�.\n", str1, str2);

	}

	return 0;
}