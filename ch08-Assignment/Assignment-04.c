/* 학번 :202110316
*  이름 :김정민
*  프로그램명 : 포인터를 이용해서 실수형 배열의 평균을 구하는 프로그램
*  날짜 :2025/09/24
*/




#include <stdio.h>

#define N100 100

void assignment2(void) {
	double arr[N100];
	for (int i = 0; i < N100; i++) arr[i] = (i + 1) * 0.1; // 0.1, 0.2, 0.3 ... 규칙적 초기화

	printf("[과제2] ddouble[100] 원소 출력\n"); qqq
		double* p = arr;
	for (int i = 0; i < N100; i++, p++) {
		printf("%.2f%s", *p, (i % 10 == 9) ? "\n" : " ");

	}
	puts("");
}

int main(void) {
	assignment2();
	return 0;
}