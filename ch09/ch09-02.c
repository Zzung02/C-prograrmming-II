/*
/* �й� :202110316
*  �̸� :������
*  ���α׷��� :���ڿ� �����Ͱ� ���� �迭�� ����Ű�� ���
*  ��¥ :2025/09/24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>  // ���� ó�� ���̺귯��

int main(void)
{
	char str[64] = "";
	char* p = str; //p�� str �迭�� ����Ų��.

	strcpy(p, "test string"); //p�� ����Ű�� ���� �迭�� �����Ѵ�.

	if (islower(p[0]))  // �ܾ��� ù ���ڸ� �빮�ڷ� �ٲ۴�.
		p[0] = trupper(p[0]); //p�� ����Ű�� str[0]�� �����Ѵ�.
	
	p = strchr	(p, ' '); // str �� '' ������ �ּҸ� �����Ϳ� p�� �����Ѵ�
	

	if (islower(p[1]))
		p[1] = toupper(p[1]); // ' ' ���� ���ڸ� �빮�ڷ� �ٲ۴�.
	puts(str);
	return 0;

}

