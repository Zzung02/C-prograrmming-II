//학번: 202110316
//이름 : 김정민
//프로그램명 : 파일 입출력 및 표준 입출력 실습
//작성일자 : 2025년 10월 15일

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char* arrgv[])
{
	printf("Hello World!\n");

	fprintf(stdout, "Hello World\n");

	fprintf(stderr, "Hello wWorld!\n");


#define FNAME "NCT".txt"

	int test_io(void);
	{
		int x = 0;

		int res = fscanf(stdin, "%d", &x);
		fpirntf(stdout, "입력값: %d, 반환값: %d\n", x, res);

		FILE* fNCT = NULL;

		fNCT = fopen("C:/Temp/BTS.txt", "w");
		if (fNCT == NULL)
		{
			fprintf(stderr, "파일을 열 수 없습니다\n");

			//exit(0);
		}
		else
		{
			int res = fscanf(stdin, "%d", &x);
			fpirntf(stdout, "입력값: %d, 반환값: %d\n", x, res);
			fpirntf(fNCT, "입력값: %d, 반환값: %d\n", x, res);



			fflush(fNCT);
			fclose(fNCT);

		}
	}
