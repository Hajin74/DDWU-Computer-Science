#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define MAX_VERTICES 50

typedef struct GraphType {
	int n;	// ������ ����
	int adj_mat[MAX_VERTICES][MAX_VERTICES];
} GraphType;

// �׷��� �ʱ�ȭ 
void graph_init(GraphType* g) //������������
{
	int r, c;
	g->n = 0;
	for (r = 0; r < MAX_VERTICES; r++)
		for (c = 0; c < MAX_VERTICES; c++)
			g->adj_mat[r][c] = 0;
}

// ���� ���� ����
void insert_edge(GraphType* g, int start, int end) //������������
{
	if (start >= g->n || end >= g->n) {
		fprintf(stderr, "�׷���: ���� ��ȣ ����");
		return;
	}
	g->adj_mat[start][end] = 1;
	//g->adj_mat[end][start] = 1;
}
#define MAX_STACK_SIZE 100
typedef int element;
typedef struct {
	element stack[MAX_STACK_SIZE];
	int top;
} StackType;

// ���� �ʱ�ȭ �Լ�
void init(StackType* s) //������������
{
	s->top = -1;
}
// ���� ���� ���� �Լ�
int is_empty(StackType* s) //������������
{
	return (s->top == -1);
}
// ��ȭ ���� ���� �Լ�
int is_full(StackType* s) //������������
{
	return (s->top == (MAX_STACK_SIZE - 1));
}
// �����Լ�
void push(StackType* s, element item) //������������
{
	if (is_full(s)) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else s->stack[++(s->top)] = item;
}
// �����Լ�
element pop(StackType* s) //������������
{
	if (is_empty(s)) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else return s->stack[(s->top)--];
}

// ��������
int calc_in_degree(GraphType* g, int v) // �ڵ� �ۼ�
{
	int count = 0, i;

	for (i = 0; i < g->n; i++) {
		if (g->adj_mat[i][v] == 1)
			count++;
	}

	return count;
}

// ���������� �����Ѵ�.
void topo_sort(GraphType* g) // �ڵ� �ۼ�
{
	int i, j, n, count = 0;
	int selected[MAX_VERTICES], in_degree[MAX_VERTICES];
	StackType *s = (StackType*)malloc(sizeof(StackType));
	init(s);

	for (i = 0; i < g->n; i++) {
		in_degree[i] = calc_in_degree(g, i);
		selected[i] = 0;
	}

	while (count < g->n) {
		for (i = 0; i < g->n; i++) {
			in_degree[i] = calc_in_degree(g, i);
		}

		for (i = 0; i < g->n; i++) {
			if (in_degree[i] == 0) {
				if (selected[i] == 0) {
					push(s, i);
					selected[i] = 1;
				}
			}
		}

		n = pop(s);
		count++;
		printf("%d->", n);

		for (j = 0; j < g->n; j++) {
			g->adj_mat[n][j] = 0;
		}
	}
}

int main(void) //������������
{
	GraphType g;
	int u, v;
	graph_init(&g);

	scanf("%d", &g.n);
	scanf("%d %d", &u, &v);
	while (u != -1) {
		insert_edge(&g, u, v);
		scanf("%d %d", &u, &v);
	}
	topo_sort(&g);
	printf("���ĳ�\n");
}