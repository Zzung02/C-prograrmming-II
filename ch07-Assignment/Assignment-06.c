/* �й� :202110316
*  �̸� :������
*  ���α׷��� : �迭 ���Ҹ� �������� ���
*  ��¥ :2025/09/24
*/
#include <stdio.h>

    void reverse_array(double arr[], double rev[], int size) {
    for (int i = 0; i < size; i++) {
        rev[i] = arr[size - 1 - i];
    }
}

int main() {
    double arr[10] = { 1.2, 3.4, 5.6, 2.3, 4.6, 7.3, 9.5, 8.7, 3.5, 0.8 };
    double rev[10];

    reverse_array(arr, rev, 10);

    printf("�迭 ����: ");
    for (int i = 0; i < 10; i++) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");

    printf("�迭 ����: ");
    for (int i = 0; i < 10; i++) {
        printf("%.1f ", rev[i]);
    }
    printf("\n");

    return 0;
}