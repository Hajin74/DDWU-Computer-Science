#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float leftT = 0, leftB = 1;
float rightT = 1, rightB = 0;
float midT = 1, midB = 1;

void fantasia(float t, float b) {
	midT = leftT + rightT;
	midB = leftB + rightB;

	if (midT == t && midB == b) {
		//printf("%f/%f\n", t, b);
		return;
	}
	else {
		if (t / b < midT / midB) {
			printf("L");

			rightT = midT;
			rightB = midB;
			midT = leftT + midT;
			midB = leftB + midB;
	
			fantasia(t, b);
		}

		if (t / b > midT / midB) {
			printf("R");

			leftT = midT;
			leftB = midB;
			midT = midT + rightT;
			midB = midB + rightB;

			fantasia(t, b);
		}
	}
}

int main(void) {
	float t, b;

	scanf("%f %f", &t, &b);

	fantasia(t, b);
}