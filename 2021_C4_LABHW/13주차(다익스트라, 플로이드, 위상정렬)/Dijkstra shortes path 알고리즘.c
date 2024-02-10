#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTICES 7
#define INF 1000

typedef struct GraphType {
	int n; // ������ ����
	int weight[MAX_VERTICES][MAX_VERTICES];
} GraphType;

/* ��Ʈ��ũ�� ������� */
int weight[MAX_VERTICES][MAX_VERTICES] = {
	{ 0, 7, INF, INF, 3, 10, INF },
	{ 7, 0, 4, 10, 2, 6, INF },
	{ INF, 4, 0, 2, INF, INF, INF },
	{ INF, 10, 2, 0, 11, 9, 4 },
	{ 3, 2, INF, 11, 0, INF, 5 },
	{ 10, 6, INF, 9, INF, 0, INF },
	{ INF, INF, INF, 4, 5, INF, 0 } 
};

int found[MAX_VERTICES]; // �湮�� ���� ǥ��
int distance[MAX_VERTICES]; // �����������κ����� �ִܰ�� �Ÿ�

// �湮���� ���� �� �߿��� ���� distance[u]�� ���� u�� ã�Ƽ� �̸� ��ȯ
int choose(int distance[], int n, int found[]) {
	int i, min, minpos;

	min = INT_MAX;
	minpos = -1;

	for (i = 0; i < n; i++) {
		if (distance[i] < min && !found[i]) {
			min = distance[i];
			minpos = i;
		}
	}

	return minpos;
}

void shortest_path(int start, int n) {
	int i, u, v;

	// �ʱ�ȭ
	for (i = 0; i < n; i++) {
		distance[i] = weight[start][i];
		found[i] = 0;
	}

	found[start] = 1; // ���� ���� �湮 ǥ��
	distance[start] = 0; // ���� �������� �Ÿ��� 0
	printf("<%d>\n", start);

	for (i = 0; i < n - 1; i++) {
		// ���õ��� ���� ���� �߿��� distance[u]�� ���� ���� ���� u�� ã��
		u = choose(distance, n, found);
		found[u] = 1;

		printf("<%d>\n", u);

		// ������ �湮�� u ������ ��ȭ�� ����� distance[��] ������
		for (v = 0; v < n; v++) {
			if (!found[v]) {
				if (distance[u] + weight[u][v] < distance[v])
					distance[v] = distance[u] + weight[u][v];
			}
		}
	}
}

int main(void) {
	shortest_path(0, MAX_VERTICES);
}