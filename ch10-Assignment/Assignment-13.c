/*
/* �й� :202110316
*  �̸� :������
*  ���α׷��� :���簢�� ������ RECT ����ü�� �����ϰ�, ���ϴ�/���� ��ǥ�� �Է¹޾� ����ϴ� ���α׷�
*  ��¥ :2025/09/30
*/

#include <stdio.h>

// ��(point)�� ��Ÿ���� ����ü
typedef struct {
    int x; // x��ǥ
    int y; // y��ǥ
} POINT;

// ���簢��(rectangle)�� ��Ÿ���� ����ü
typedef struct {
    POINT left_bottom; // ���ϴ� ��
    POINT right_top;   // ���� ��
} RECT;

// ���簢�� ������ ����ϴ� �Լ�
void print_rect(RECT r) {
    printf("[RECT ���ϴ���:(%d, %d) ������:(%d, %d)]\n",
        r.left_bottom.x, r.left_bottom.y,
        r.right_top.x, r.right_top.y);
}

int main(void) {
    RECT rect; // ���簢�� ����ü ���� ����

    // ���ϴ� ��ǥ �Է¹ޱ�
    printf("���簢���� ���ϴ���(x,y)? ");
    scanf("%d %d", &rect.left_bottom.x, &rect.left_bottom.y);

    // ���� ��ǥ �Է¹ޱ�
    printf("���簢���� ������(x,y)? ");
    scanf("%d %d", &rect.right_top.x, &rect.right_top.y);

    // ���簢�� ���� ���
    print_rect(rect);

    return 0;
}
