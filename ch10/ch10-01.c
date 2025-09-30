/*
/* 학번 :202110316
*  이름 :김정민
*  프로그램명 : 구조체(struct) 예제 프로그램
*  날짜 :2025/09/30
*/


/*typedef struct contact {
	char name[50];
	char phon[15]
		int ringtone;

};

typedef struct contact contact;
contact kim = { 0 };

*/




#include "contact.h"

contach kim = { 0 };

int main() {

	contact lee = { "LEE", "010-1234-5678", 1 };

	contact lee2 = { 0 };

	lee2 = lee;

//	lee2 = { "LEE", "010-9876-5432", 2 }; error
	strcpy(lee2.name, "LEE2");
	strcpy(lee2.phone, "010-9876-5432");
	lee2.ringtone = 2;

	return p1;
}
int test_point() {
	point p1 = {1, 2};
	point p2 = { 3, 4 };

	point p3 = { 0 };


	p3 = mul10(p1);
	//swap(&p1, &p2);

	prturn 0;

}



point mul10(point pt)
{
	point pr = { 0 };
	pr.x *= 10;
	pr.y *= 10;

	return pr;
}










