/* �й� :202110316
*  �̸� :������
*  ���α׷��� :�� ���� �迭 ���Ҹ� ���� ��ȯ�ϴ� swp_array �Լ�
*  ��¥ :2025/09/24
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