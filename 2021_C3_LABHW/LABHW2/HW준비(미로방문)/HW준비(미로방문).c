#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#define WIDTH 10
#define HEIGHT 10
#include <stdio.h>

int screen[WIDTH][HEIGHT] = {
-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
-1,-1, 0, 0,-1,-1,-1, 0,-1,-1,
-1,-1,-1, 0, 0, 0, 0, 0,-1,-1,
-1,-1,-1, 0,-1,-1,-1,-1,-1,-1,
-1,-1,-1, 0, 0, 0, 0, 0,-1,-1,
-1,-1,-1, 0,-1, 0,-1,-1,-1,-1,
-1,-1,-1, 0,-1, 0,-1,-1,-1,-1,
-1,-1,-1, 0,-1, 0, 0, 0,-1,-1,
-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
};

void flood_fill(int x, int y) {
	int num;
	static int count = 0;

	if (screen[x][y] == 0) {
		screen[x][y] = ++count;
		flood_fill(x, y + 1); // 3시
		flood_fill(x + 1, y); // 6시
		flood_fill(x, y - 1); // 9시
		flood_fill(x - 1, y); // 12시
	}
}

void display(int s[][HEIGHT]) {
	int i, j;

	for (i = 0; i < WIDTH; i++) {
		for (j = 0; j < HEIGHT; j++) {
			printf(" %2d ", s[i][j]);
		}
		printf("\n");
	}
}

int main(void) {
	flood_fill(4, 3);
	display(screen);
}