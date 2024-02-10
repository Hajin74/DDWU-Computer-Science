#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#define WIDTH 10
#define HEIGHT 10
int count = 0;
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

	if (screen[x][y] == 0) {
		screen[x][y] = ++count;

		flood_fill(x, y + 1); // ©Л
		flood_fill(x + 1, y); // го
		flood_fill(x - 1, y); // ╩С
		flood_fill(x, y - 1); // аб
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

	flood_fill(4, 3);
	display(screen);
}