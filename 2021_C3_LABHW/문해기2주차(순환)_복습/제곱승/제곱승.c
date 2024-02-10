#pragma warning(disable: 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ÈÎ¾À Àû°Ô µ¹¸± ¼ö ÀÖÀ½
long long pow(int r, int n) {
	if (n == 1)
		return r;
	else if (n % 2 == 0) {
		int m_value = pow(r, n / 2);
		return m_value * m_value;
	}
	else {
		int m_value = pow(r, n / 2);
		return r * m_value * m_value;
	}
}

int main(void) {
	int r, n;
	int result;

	scanf("%d %d", &r, &n);

	result = pow(r, n);
	printf("%d\n", result);
}




/* (¹Ýº¹¹®)
long long pow(int r, int n) {
	long long result = 1;
	int i;

	for (i = 0; i < n; i++) {
		result = result * r;
	}

	return result;
}
*/

/* (Àç±Í: ¿©ÀüÈ÷ n¹øÀÇ °ö¼À)
long long pow(int r, int n) {
	if (n == 1)
		return r;
	else
		return r * pow(r, n - 1);
}
*/