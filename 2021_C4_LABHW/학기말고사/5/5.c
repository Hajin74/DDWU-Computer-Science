#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

#define TRUE	1
#define FALSE	0
#define MAX_VERTICES	100		// ����� �� 
#define INF 	999		// 

int distance[MAX_VERTICES];	// ���۳��κ����� �ִܰ�� �Ÿ� 
int found[MAX_VERTICES];	//  �湮�� ��� ǥ�� 

typedef struct GraphType {
	int n;					// ������ ����
	int adj_mat[MAX_VERTICES][MAX_VERTICES];
} GraphType;

// �׷��� �ʱ�ȭ 
void graph_init(GraphType* g) // �������� ����
{
	int r, c;
	g->n = 0;
	for (r = 0; r < MAX_VERTICES; r++)
		for (c = 0; c < MAX_VERTICES; c++)
			g->adj_mat[r][c] = INF;

	for (r = 0; r < MAX_VERTICES; r++)
		g->adj_mat[r][r] = 0;
}

// ���� ���� ����
void insert_vertex(GraphType* g, int v) // �������� ����
{
	if (((g->n) + 1) > MAX_VERTICES) {
		fprintf(stderr, "�׷���: ������ ���� �ʰ�");
		return;
	}
	g->n++;
}

// ���� ���� ����
void insert_edge(GraphType* g, int start, int end, int weight) // �������� ����
{
	if (start >= g->n || end >= g->n) {
		fprintf(stderr, "�׷���: ���� ��ȣ ����");
		return;
	}
	g->adj_mat[start][end] = weight;
	g->adj_mat[end][start] = weight;
}

int choose(int distance[], int n, int found[]) // �������� ����
{
	int i, min, minpos;
	min = INT_MAX;
	minpos = -1;
	for (i = 0; i < n; i++)
		if (distance[i] < min && !found[i]) {
			min = distance[i];
			minpos = i;
		}
	return minpos;
}

void shortest_path(GraphType* g, int start, int end) // �ڵ� �ۼ�
{
	int i, u, v;
	int n;

	// �ʱ�ȭ
	for (i = 0; i < g->n; i++) {
		distance[i] = g->adj_mat[start][i];
		found[i] = 0;
	}

	found[start] = 1; // ���� ���� �湮 ǥ��
	distance[start] = 0; // ���� �������� �Ÿ��� 0
	printf("%d-", start);
	n = distance[start];

	for (i = 0; i < g->n - 1; i++) {
		// ���õ��� ���� ���� �߿��� distance[u]�� ���� ���� ���� u�� ã��
		u = choose(distance, g->n, found);
		found[u] = 1;

			printf("<%d>->%d", n, u);
			n = distance[u];


		// ������ �湮�� u ������ ��ȭ�� ����� distance[��] ������
		for (v = 0; v < g->n; v++) {
			if (!found[v]) {
				if (distance[u] + g->adj_mat[u][v] < distance[v])
					distance[v] = distance[u] + g->adj_mat[u][v];
			}
		}
	}
}

int main(void) // �������� ����
{
	GraphType g;
	int u, v, w;
	int start, end;

	graph_init(&g); // �׷��� �ʱ�ȭ

	scanf("%d", &g.n);
	scanf("%d %d %d", &u, &v, &w);
	while (u != -1) {
		insert_edge(&g, u, v, w);
		scanf("%d %d %d", &u, &v, &w);
	}
	scanf("%d", &start);
	scanf("%d", &end);

	shortest_path(&g, start, end);
}