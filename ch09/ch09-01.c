/*
/* �й� :202110316
*  �̸� :������
*  ���α׷��� : 
*  ��¥ :2025/09/24
*/



//����:Ű����κ��� ���� ���ڵ带 �� �� �Է� �޾� �ʵ带
//�����Ͽ� ����ü �迭�� ������ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���ڵ� ����: �̸� | �й� | �а� | �г�(����)
//�Է� ���� ����: :"exit" �Է�



struct Student {
	char name[24];
	char id[16];
	char major[32];
	int year;

};

typedef struct Student Student;
//�Լ� ���� ����


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100 //�ִ� �л� ��
#define SIZE 200 // ���� �Է� ũ�� 

//����ü ���� 
struct Student {
	char name[24];  //�̸�
	char id[16];    //�й�
	char major[32]; //�а�
	int year;       //�г�
};

typedef struct Student Student;

// �Լ� ���� ����
int inputRecords(Student students[], int max);
void printRecords(Students, students[], int count);

// main�Լ�
int main(void) {
	Student students[MAX];
	int count;

	count = inputRecords(students, MAX);
	printRec



return 0;

char input[SIZE];
int count =  0;

printf("�л� ������ �Է��ϼ��� (����: �̸�|�й�|�а�|�г�)\n");
printf("�Է��� �����Ϸ��� 'exit' �Է�\n");
