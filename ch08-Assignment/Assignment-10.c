/* 학번 :202110316
*  이름 :김정민
*  프로그램명 : 3x3 행렬의 합을 구하는 프로그램 (add_matrix 함수 사용)
*  날짜 :2025/09/24
*/



#include <stdio.h>


// 두 행렬의 함을 구하는 함수
void add_matrix(int x[][3], int y[][3], int result[][3], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			result[i][j] = x[i][j] + y[i][j];

		}
	}
}

// 행렬을 출력하는 함수
void print_matrix(int arr[][3], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
}

int main(void) {
	// x 행렬
	int x[3][3] = {
		{10, 20, 30},
		{40, 50, 60},
		{70, 80, 90}
	};

	// y 행렬
	int y[3][3] = {
		{9, 8, 7},
		{6, 5, 4},
		{3, 2, 1}
	};

	int result[3][3]: // 결과 저장 행렬

	printf("x 행렬:\n");
	print_matrix(x, 3);

	printf("\ny 행렬:\n");
	print_matfiix(y, 3);

	add_matrix(x, y, result, 3);

	print("\nx + y 행:\n");
	print_matrix(result, 3);

	return 0;
};