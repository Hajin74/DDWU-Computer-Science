#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef struct TreeNode {
	int data;
	struct TreeNode* left, * right;
	int is_thread; // 쓰레드 노드인지 아닌지 구별
} TreeNode;

// 트리 생성
TreeNode n1 = { '1', NULL, NULL, 1 }; // 쓰레드 노드
TreeNode n2 = { '2', NULL, NULL, 1 }; // 쓰레드 노드
TreeNode n3 = { '3', &n1, &n2, 0 };
TreeNode n4 = { '4', NULL, NULL, 1 }; // 쓰레드 노드 
TreeNode n5 = { '5', NULL, NULL, 0 }; // 쓰레드 노드이지만 중위 순회의 마지막 노드이므로 0으로 
TreeNode n6 = { '6', &n4, &n5, 0 };
TreeNode n7 = { '7', &n3, &n6, 0 };
TreeNode* exp = &n7;

// p의 중위 후속 노드를 반환
TreeNode* find_thread_successor(TreeNode* p) {
		TreeNode* q = p->right;

		if (q == NULL)
			return NULL;

		if (p->is_thread == TRUE)
			return q;

		while (q->left != NULL) 
			q = q->left;

		return q;
}

void thread_inorder(TreeNode* t) {
	TreeNode* q = t;

	// 일단 중위 순회의 첫 노드로 이동
	while (q->left != NULL) 
		q = q->left;

	do {
		printf("%c ", q->data);
		q = find_thread_successor(q);
	} while (q);
}

int main(void) {
	n1.right = &n3;
	n2.right = &n7;
	n4.right = &n6;

	thread_inorder(exp);
}