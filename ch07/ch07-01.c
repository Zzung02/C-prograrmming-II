/* 학번 :202110316	
*  이름 :김정민
*  프로그램명 :배열 복사 프로그램
*  날짜 :2025/09/24
*/




#include <stdio.h>

void copy_array(int from[], int to[], int sz);

int main()
{
    if (test_copy_array() == 0)
        printf("배열 복사 성공!\n");
    else
        printf("배열 복사 실패!\n");

    return 0;
}

int test_copy_array()
{
#define LEN 5
    int x[] = { 1, 2, 3, 4, 5 };
    int y[LEN] = { 0 };

    int size = sizeof(y) / sizeof(y[0]);

    copy_array(x, y, LEN);

    for (int i = 0; i < LEN; i++)
    {
        if (y[i] != x[i])
        {
            return -1; // 하나라도 다르면 실패
        }
    }

    return 0; // 모두 같으면 성공
}

void copy_array(int from[], int to[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        to[i] = from[i];
    }
}