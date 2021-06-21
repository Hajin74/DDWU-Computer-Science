#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double mt = 1, mb = 1, lt = 0, lb = 1, rt = 1, rb = 0;

void fantasia(double n, double m) {

	if (n == mt && m == mb) {
		return 0;
	} else if (n / m < mt / mb) {
		printf("L");
		rt = mt;
		rb = mb;
		mt = lt + rt;
		mb = lb + rb;
	}
	else if (n / m > mt / mb) {
		printf("R");
		lt = mt;
		lb = mb;
		mt = lt + rt;
		mb = lb + rb;
	}
	fantasia(n, m);
}

int main(void) {
	double top, bottom;

	scanf("%lf %lf", &top, &bottom);

	fantasia(top, bottom);
}