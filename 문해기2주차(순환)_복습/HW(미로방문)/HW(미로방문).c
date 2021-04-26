#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#define WIDTH 10
#define HEIGHT 10
int count = 0;
#include <stdio.h>

int screen[WIDTH][HEIGHT] = {
0, 0, 0,-1,-1,-1,-1,-1,-1,-1,
-1,-1, 0,-1,-1,-1,-1,-1,-1,-1,
-1, 0, 0, 0, 0, 0, 0,-1,-1,-1,
-1,-1,-1,-1, 0,-1, 0,-1,-1,-1,
-1,-1,-1,-1, 0,-1, 0,-1,-1,-1,
-1,-1, 0, 0, 0,-1, 0, 0, 0,-1,
-1,-1,-1,-1, 0,-1, 0,-1,-1,-1,
-1,-1,-1,-1, 0,-1, 0,-1, 0,-1,
-1,-1,-1,-1, 0,-1,-1,-1, 0,-1,
-1,-1,-1,-1, 0, 0, 0, 0, 0, 0
};

void flood_fill(int x, int y) {
	int num;

	if (screen[x][y] == 0) {
		screen[x][y] = ++count;

		if ((x >= 0 && x < WIDTH) && (y + 1 >= 00 && y + 1 < HEIGHT))
			flood_fill(x, y + 1); // 3시

		if ((x + 1 >= 0 && x + 1 < WIDTH) && (y >= 00 && y < HEIGHT))
			flood_fill(x + 1, y); // 6시

		if ((x >= 0 && x < WIDTH) && (y - 1 >= 00 && y - 1 < HEIGHT))
			flood_fill(x, y - 1); // 9시

		if ((x - 1 >= 0 && x - 1 < WIDTH) && (y >= 00 && y < HEIGHT))
			flood_fill(x - 1, y); // 12시
	}
}

void display(int screen[][HEIGHT]) {
	int i, j;

	for (i = 0; i < WIDTH; i++) {
		for (j = 0; j < HEIGHT; j++) {
			printf("%3d", screen[i][j]);
		}
		printf("\n");
	}
}

int main(void) {
	display(screen);
	printf("\n");

	flood_fill(0, 0);
	display(screen);
}