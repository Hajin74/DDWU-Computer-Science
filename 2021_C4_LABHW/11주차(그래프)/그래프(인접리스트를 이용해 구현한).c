#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "queue.h"

#define TRUE 1
#define FALSE 0
#define MAX_VERTICES 10

int visited[MAX_VERTICES];

typedef struct GraphNode {
	int vertex;
	struct GraphNode* link;
} GraphNode;

typedef struct GraphType {
	int n;
	GraphNode* adj_list[MAX_VERTICES];
} GraphType;

void visited_init() {
	int i;

	for (i = 0; i < MAX_VERTICES; i++)
		visited[i] = 0;
}

void graph_init(GraphType* g) {
		int v;

		g->n = 0;
		for (v = 0; v < MAX_VERTICES; v++)
			g->adj_list[v] = NULL;
}

void insert_vertex(GraphType* g, int v) {
	if (g->n + 1 > MAX_VERTICES) {
		fprintf(stderr, "�׷���: ������ ���� �ʰ�");
		return;
	}
	g->n++;
}

void insert_edge(GraphType* g, int u, int v) {
	GraphNode* node;

	if (u >= g->n || v >= g->n) {
		fprintf(stderr, "�׷���: ���� ��ȣ ����");
		return;
	}

	// u �� v �� �Ŵܴ�
	node = (GraphNode*)malloc(sizeof(GraphNode));
	node->vertex = v;
	node->link = g->adj_list[u];
	g->adj_list[u] = node;

	// v �� u �� �Ŵܴ�
	node = (GraphNode*)malloc(sizeof(GraphNode));
	node->vertex = u;
	node->link = g->adj_list[v];
	g->adj_list[v] = node;
}

void dfs_list(GraphType* g, int v) {
	GraphNode* u;
	
	visited[v] = 1;
	printf("%d ", v);

	for (u = g->adj_list[v]; u != NULL; u = u->link) {
		if (!visited[u->vertex])
			dfs_list(g, u->vertex);
	}
}

void bfs_list(GraphType* g, int v) {
	GraphNode* w;
	QueueType q;

	init(&q); // ť �ʱ� ȭ 

	visited[v] = TRUE; // ���� v �湮 ǥ�� 
	printf("%d ", v);

	enqueue(&q, v); // ���������� ť�� ���� 

	while (!is_empty(&q)) {
		v = dequeue(&q); // ť�� ����� ���� ���� 
		for (w = g->adj_list[v]; w; w = w->link) //���� ���� Ž�� 
			if (!visited[w->vertex]) { // �̹湮 ���� Ž�� 
				visited[w->vertex] = TRUE; // �湮 ǥ�� 
				printf("%d ", w->vertex);
				enqueue(&q, w->vertex); //������ ť�� 
			}
	}
}

int main(void) {
	GraphType g;

	graph_init(&g);

	insert_vertex(&g, 0);
	insert_vertex(&g, 1);
	insert_vertex(&g, 2);
	insert_vertex(&g, 3);

	insert_edge(&g, 0, 1);
	insert_edge(&g, 1, 2);
	insert_edge(&g, 2, 3);
	insert_edge(&g, 3, 0);
	insert_edge(&g, 0, 2);

	printf("���� �켱 Ž��\n");
	dfs_list(&g, 0);
	printf("\n");

	visited_init();
	dfs_list(&g, 1);
	printf("\n");

	printf("���� �켱 Ž��\n");
	visited_init();
	bfs_list(&g, 0);
	printf("\n");

	visited_init();
	bfs_list(&g, 1);
	printf("\n");
}
