#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_VERTICES 10

typedef struct {
	int n;
	int adj_mat[MAX_VERTICES][MAX_VERTICES];
} GraphType;

void graph_init(GraphType* g) {
	int r, c;

	g->n = 0;
	for (r = 0; r < MAX_VERTICES; r++) {
		for (c = 0; c < MAX_VERTICES; c++)
			g->adj_mat[r][c] = 0;
	}
}

void insert_vertex(GraphType* g, int v) {
	if (g->n + 1 > MAX_VERTICES) {
		fprintf(stderr, "�׷��� ������ ���� �ʰ�");
		return;
	}
	g->n++;
}

void insert_edge(GraphType* g, int start, int end) {
	if (start >= g->n || end >= g->n) {
		fprintf(stderr, "�׷���: ���� ��ȣ ����");
		return;
	}
	g->adj_mat[start][end] = 1;
	g->adj_mat[end][start] = 1;
}

void delete_edge(GraphType* g, int start, int end) {
	if (start >= g->n || end >= g->n) {
		fprintf(stderr, "�׷���: ���� ��ȣ ����");
		return;
	}
	g->adj_mat[start][end] = 0;
	g->adj_mat[end][start] = 0;
}

void read_graph(GraphType* g, char* filename) {
	FILE* fp = fopen(filename, "r");
	int n, u, v;

	if (fp == NULL) {
		fprintf(stderr, "���� % s�� �� �� ����!\n", filename);
		return;
	}

	// ���� �б�
	if (fscanf(fp, "%d\n", &n) != EOF)
		g->n = n;

	// ���� �б�
	while (fscanf(fp, "%d %d\n", &u, &v) != EOF) {
		insert_edge(g, u, v);
	}

	fclose(fp);
}

void write_graph(GraphType* g, char* filename) {
	int r, c;
	FILE* fp;

	if (filename == NULL)
		fp = stdout;
	else {
		fp = fopen(filename, "w");

		if (fp == NULL) {
			fprintf(stderr, "���� % s�� �� �� ����!\n", filename);
			return;
		}
	}

	fprintf(fp, "%d\n", g->n);
	for (r = 0; r < g->n; r++) {
		for (c = r; c < g->n; c++) { // �ߺ����� c = r
			if (g->adj_mat[r][c] == 1)
				fprintf(fp, "%d %d\n", r, c);
		}
	}

	fclose(fp);
}

int main(void) {
	GraphType *g = (GraphType*)malloc(sizeof(GraphType));

	graph_init(g);
	read_graph(g, "input.txt");

	insert_edge(g, 1, 4);
	delete_edge(g, 0, 1);

	write_graph(g, "output.txt");
}