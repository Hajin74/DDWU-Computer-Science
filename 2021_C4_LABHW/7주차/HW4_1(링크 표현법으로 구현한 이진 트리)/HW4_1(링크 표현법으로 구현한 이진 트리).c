#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define MAX_TREE_SIZE 20

typedef struct TreeNode {
	int data;
	struct TreeNode* left, * right;
} TreeNode;

// 트리 생성
TreeNode n1 = { 15, NULL, NULL };
TreeNode n2 = { 4, &n1, NULL };
TreeNode n3 = { 16, NULL, NULL };
TreeNode n4 = { 25, NULL, NULL };
TreeNode n5 = { 15, &n3, &n4 };
TreeNode n6 = { 15, &n2, &n5 };
TreeNode* root = &n6;

TreeNode m1 = { 15, NULL, NULL };
TreeNode m2 = { 4, &m1, NULL };
TreeNode m3 = { 16, NULL, NULL };
TreeNode m7 = { 28, NULL, NULL }; // 추가 
TreeNode m4 = { 25, NULL, &m7 }; // 변경 
TreeNode m5 = { 15, &m3, &m4 };
TreeNode m6 = { 15, &m2, &m5 };
TreeNode* root2 = &m6;

TreeNode r1 = { 15, NULL, NULL };
TreeNode r2 = { 14, &r1, NULL };
TreeNode r3 = { 16, NULL, NULL };
TreeNode r7 = { 28, NULL, NULL }; // 추가 
TreeNode r4 = { 25, NULL, &r7 }; // 변경 
TreeNode r5 = { 15, &r3, &r4 };
TreeNode r6 = { 15, &r2, &r5 };
TreeNode* root3 = &r6;

// 비단말노드(자식이 있는) 개수
int get_nonleaf_count(TreeNode *node) {
	/*
	int count = 0;
	
	// 이진 트리는 자식이 없거나, 1개 거나, 2개 이므로
	// 자식이 있는 노드의 개수 = 자식 1개인 노드 + 자식 2개인 노드
	if (node != NULL)
		count += get_oneleaf_count(node) + get_twoleaf_count(node);

	return count;
	*/
	if (node == NULL)
		return 0;
	else if (node->right == NULL && node->left == NULL)
		return 0;
	else
		return 1 + get_nonleaf_count(node->left) + get_nonleaf_count(node->right);
}

// 자식이 하나인 노드의 개수
int get_oneleaf_count(TreeNode *node) {
	int count = 0;

	if (node != NULL) {
		// 자식이 하나만 있는 경우 count 올리기
		if ((node->left != NULL) && (node->right == NULL) || (node->left == NULL) && (node->right != NULL))
			count++;

		if (node->left != NULL)
			count += get_oneleaf_count(node->left);

		if (node->right != NULL)
			count += get_oneleaf_count(node->right);
	}

	return count;
}

// 자식이 두 개
int get_twoleaf_count(TreeNode* node) {
	int count = 0;

	if (node != NULL) {
		if (node->left != NULL && node->right != NULL)
			count++;

		if (node->left != NULL)
			count += get_twoleaf_count(node->left);

		if (node->right != NULL)
			count += get_twoleaf_count(node->right);
	}

	return count;
}

// 노드 중 가장 큰 수
int get_max(TreeNode* node) {
	int left, right, max = 0;

	if (node != NULL) {
		max = node->data;

		left = get_max(node->left);
		if (left > max)
			max = left;

		right = get_max(node->right);
		if (right > max)
			max = right;
	}

	return max;
}

// 노드 중 가장 작은 수
int get_min(TreeNode *node) {
	int left, right, min = INT_MAX;

	if (node != NULL) {
		min = node->data;

		left = get_min(node->left);
		if (left < min)
			min = left;

		right = get_min(node->right);
		if (right < min)
			min = right;
	}

	return min;
}

// 전위순회
void preorder(TreeNode* node) {
	if (node != NULL) {
		printf("%d ", node->data);
		preorder(node->left);
		preorder(node->right);
	}
}

// 이진 트리의 노드들의 값을 1씩 증가
void node_increase(TreeNode* node) {
	if (node != NULL) {
		node->data++;
		node_increase(node->left);
		node_increase(node->right);
	}
}

// 두 개의 이진트리의 동일여부 : 같음(1), 다름(0)
int equal(TreeNode* node1, TreeNode* node2) {
	/*
	if (node1 != NULL && node2 != NULL) {
		if (node1->data != node2->data)
			return 0;
		else {
			equal(node1->left, node2->left);
			equal(node1->right, node2->right);
		}
	}

	return 1;
	*/
	if (node1 == NULL && node2 == NULL)
		return 1;
	else if (node1 == NULL || node2 == NULL)
		return 0;
	else if (node1->data != node2->data)
		return 0;
	else
		return equal(node1->left, node2->left) && equal(node1->right, node2->right);
}

// 트리 복제
TreeNode* copy(TreeNode* node) {
	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));

	if (node == NULL)
		return NULL;
	else {
		newNode->data = node->data;
		newNode->left = copy(node->left);
		newNode->right = copy(node->right);
	}

	return newNode;
}

int main(void) {
	TreeNode* result[MAX_TREE_SIZE];
	TreeNode* clone;
	int i, num;

	/*
	printf("가)\n");
	printf("트리 root 중 비단말노드의 개수는 %d.\n", get_nonleaf_count(root));
	printf("트리 root2 중 비단말노드의 개수는 %d.\n", get_nonleaf_count(root2));

	printf("트리 root 중 자식이 하나만 있는 노드의 개수는 %d.\n", get_oneleaf_count(root));
	printf("트리 root2 중 자식이 하나만 있는 노드의 개수는 %d.\n", get_oneleaf_count(root2));

	printf("트리 root 중 자식이 둘이 있는 노드의 개수는 %d.\n", get_twoleaf_count(root));
	printf("트리 root2 중 자식이 둘이 있는 노드의 개수는 %d.\n", get_twoleaf_count(root2));

	printf("트리 root 에서 가장 큰 수는 %d.\n", get_max(root));
	printf("트리 root2 에서 가장 큰 수는 %d.\n", get_max(root2));
	
	printf("트리 root 에서 가장 작은 수는 %d.\n", get_min(root));
	printf("트리 root2 에서 가장 작은 수는 %d.\n", get_min(root2));
	
	printf("\n다)\n");
	preorder(root);
	node_increase(root);
	printf("\n");
	preorder(root);
	printf("\n");

	printf("%s\n", equal(root, root) ? "같다" : "다르다");
	printf("%s\n", equal(root2, root2) ? "같다" : "다르다");
	printf("%s\n", equal(root, root2) ? "같다" : "다르다");
	*/
	printf("%s\n", equal(root2, root3) ? "같다" : "다르다");

	printf("\n 라)\n");
	clone = copy(root);
	preorder(root);
	printf("\n");
	preorder(clone);
	printf("\n");
}

