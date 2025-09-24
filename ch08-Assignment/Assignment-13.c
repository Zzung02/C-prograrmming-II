/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :
*  날짜 :2025/09/24
*/



#include <stdio.h>

// 두 배열의 원소를 서로 교환하는 함수

void swap_array(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

int main(void) {
	int a[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int b[10] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18 };
	int size = 10;

	printf("a: ");
	for (int i = 0; i < size; i++) printf("%d ", a[i]);
	printf("\n");

	printf("b: ");
	for (int i = 0; i < size; i++) printf("%d ", b[i]);
	printf("\n");

	// swap 실행
	swap_array(a, b, size);

	printf("<< swap_array 실행 후 >>\n");

	printf("a: ");
	for (int i = 0; i < size; i++) printf("%d ", a[i]);
	printf("\n");

	printf("b: ");
	for (int i = 0; i < size; i++) printf("d ", b[i]);
	printf("\n");

	return 0;


}