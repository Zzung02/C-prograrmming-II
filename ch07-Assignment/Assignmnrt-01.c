/* �й� :202110316
*  �̸� :������
*  ���α׷��� :
*  ��¥ :2025/09/24
*/


#include <stdio.h>

void arithmetic_sequence(int first, int diff, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = first + i * diff;
    }
}

int main() {
    int first, diff;
    int arr[10];

    printf("ù ��° ��? ");
    scanf_s("%d", &first);   // scanf �� scanf_s
    printf("����? ");
    scanf_s("%d", &diff);    // scanf �� scanf_s

    arithmetic_sequence(first, diff, arr, 10);

    printf("��������: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}