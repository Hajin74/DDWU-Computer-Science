#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#define WIDTH 10
#define HEIGHT 10
#include <stdio.h>

int count = 0;

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
	if (screen[x][y] == 0) {
		screen[x][y] = ++count;

		if (y + 1 < HEIGHT)
			flood_fill(x, y + 1);
		if(x + 1 < WIDTH)
			flood_fill(x + 1, y);
		if (y - 1 >= 0)
			flood_fill(x, y - 1);
		if (x - 1 >= 0)
			flood_fill(x - 1, y);
	}
}

void displayMaze(int maze[][HEIGHT]) {
	int i, j;

	for (i = 0; i < WIDTH; i++) {
		for (j = 0; j < HEIGHT; j++)
			printf(" %2d", maze[i][j]);
		printf("\n");
	}
}

int main(void) {
	printf("미로:\n");
	displayMaze(screen);

	flood_fill(0, 0);

	printf("\n시작점을 (0, 0)으로 한 미로방문(순서표기): \n");
	displayMaze(screen);
}