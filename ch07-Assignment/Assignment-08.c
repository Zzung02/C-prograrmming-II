/* �й� :202110316
*  �̸� :������
*  ���α׷��� : ��ǰ ���� �迭�� ���� ���ε� ���� ���
*  ��¥ :2025/09/24
*/

#include <stdio.h>

    void apply_discount(int price[], int discounted[], int size, int percent) {
    for (int i = 0; i < size; i++) {
        discounted[i] = price[i] * (100 - percent) / 100;
    }
}

int main() {
    int price[5], discounted[5];
    int percent;

    printf("��ǰ�� 5���� �Է��ϼ���: ");
    for (int i = 0; i < 5; i++) scanf_s("%d", &price[i]);

    printf("������(%%)? ");
    scanf_s("%d", &percent);

    apply_discount(price, discounted, 5, percent);

    for (int i = 0; i < 5; i++) {
        printf("����: %d  =>  ���� ��: %d\n", price[i], discounted[i]);
    }

    return 0;
}