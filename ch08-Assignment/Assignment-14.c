/* 학번 :202110316
*  이름 :김정민
*  프로그램명 :두 개의 배열 원소를 서로 교환하는 swp_array 함수
*  날짜 :2025/09/24
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_array(int arr[], int n, int range, int* count) {
	if (arr == NULL || count == NULL || n < 0 || range <= 0) {
		if (count) *count = 0;
		return;

	}
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % range;

	}
	*count = n;
}

int main(void) {
	int arr[100];
	int count;

	srand(time(NULL));

	rand_array(arr, 10, 100, &count);

	printf("count = %d\n", count);
	for (int i = 0; i < count; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;

}