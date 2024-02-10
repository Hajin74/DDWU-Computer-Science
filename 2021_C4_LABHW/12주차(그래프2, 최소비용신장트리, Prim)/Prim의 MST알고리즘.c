#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VERTICES 7
#define INF 1000L

int weight[VERTICES][VERTICES] = {
	{ 0, 29, INF, INF, INF, 10, INF },
	{ 29, 0, 16, INF, INF, INF, 15 },
	{ INF, 16, 0, 12, INF, INF, INF },
	{ INF, INF, 12, 0, 22, INF, 18 },
	{ INF, INF, INF, 22, 0, 27, 25 },
	{ 10, INF, INF, INF, 27, 0, INF },
	{ INF, 15, INF, 18, 25, INF, 0 }
};

int selected[VERTICES]; // 0���� �ʱ�ȭ, ���õ� ����Ʈ�������� ���������� ����
int dist[VERTICES]; // ����Ʈ�����ճ��� �������� �ּҰŸ�

int get_min_vertex(int n) {
	int v, i;

	for (i = 0; i < n; i++) {
		if (!selected[i]) {
			v = i;
			break;
		}
	}

	for (i = 0; i < n; i++) {
		if (!selected[i] && dist[i] < dist[v])
			v = i;
	}

	return v;
}

void prim(int s, int n) {
	int i, u, v;

	for (u = 0; u < n; u++)
		dist[u] = INF;

	// ���� ������ s �� �Ÿ��� ����
	dist[s] = 0;

	for (i = 0; i < n; i++) {
		// ���õ��� ���� ���� �߿��� dist[u]�� ���� ���� ���� u �� ã��
		u = get_min_vertex(n);
		selected[u] = 1; // <����Ʈ������>�� u �� ���Խ�Ŵ
		printf("%d ", u);
		// ������ <����Ʈ������>�� ���Խ�Ų u ������ ��ȭ�� ����� dist[..]�� ������
		for (v = 0; v < n; v++)
			if (!selected[v])
				if (weight[u][v] < dist[v])
					dist[v] = weight[u][v];
	}

	printf("\n");
}

int main(void) {
	prim(0, VERTICES);
}