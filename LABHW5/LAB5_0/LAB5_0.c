// 20200988 컴퓨터학과 유하진
#include <stdio.h>
int main(void)
{
	char ch;
	int i, j, k;
	double x, y, z;

	// 자동형변환
	ch = 'A' + 1;
	printf("ch의 아스키값은 %d이고 문자로 표현하면 %c\n", ch, ch);
	ch = 'A' + 32;
	printf("ch의 아스키값은 %d이고 문자로 표현하면 %c\n\n", ch, ch);

	i = 9.99;
	printf("자동 형 변환 결과 : i = %d\n\n", i);

	x = 10;
	printf("자동 형 변환 결과 : x = %f\n\n", x);

	x = 10 + 9.99;
	printf("자동 형 변환 결과 : x = %f\n\n", x);

	j = 10;
	k = 4;
	y = 10.0;
	z = 4.0;

	printf("강제 형 변환(Casting에 의한)\n");
	x = (double)j / k;
	printf("1 : x = %f\n", x);
	x = (double)(j / k);
	printf("2 : x = %f\n\n", x);

	x = (int) y / z;
	printf("3 : x = %f\n", x);
	x = (int)(y / z);
	printf("4 : x = %f\n\n", x);

	x = j / k * k;
	printf("5 : x = %f\n", x);
	x = (double)j / k * k;
	printf("6 : x = %f\n", x);
	x = (double)(j / k) * k;
	printf("7 : x = %f\n", x);
	x = j / (double)k * k;
	printf("8 : x = %f\n", x);
	x = j / k * (double)k;
	printf("9 : x = %f\n", x);
}