/* 학번 :202110316
*  이름 :김정민
*  프로그램명 : 정수 배열에서 최댓값과 최솟값을 찾는 프로그램
*  날짜 :2025/09/24
*/


#include <stdio.h>


void get_min_max(int arr[], int size, int* min, int* max) {
	*min = arr[0];
	*max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < *min) *min = arr[i];
		if (arr[i] > *max) *max = arr[i];

	}

}


int main(void) {
	int arr[] = { 23, 45, 66, 12, 99, 83, 20, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int min, max;

	get_min_max(arr, size, &min, &max);

	printf("최댓값: %d\n", max);
	printf("최솟값: %d\n", min);
	return 0;


}