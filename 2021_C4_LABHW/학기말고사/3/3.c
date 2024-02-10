#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define TRUE 1
#define FALSE 0

typedef int element;
typedef struct TreeNode {
	element data;
	struct TreeNode* left, * right;
} TreeNode;
// key�� ���� Ž�� Ʈ�� root�� �����Ѵ�. 

TreeNode* insert_node(TreeNode* root, element key) // �������� ����
{
	TreeNode* p, * t; // p�� �θ���, t�� ������ 
	TreeNode* n;	    // n�� ���ο� ���

	t = root;
	p = NULL;

	// Ž���� ���� ����, �ݺ��� �̿��ؼ� search(���� search�Լ� ����)
	while (t != NULL) { // �����尡 NULL�� �ɶ�����
		 //if( key == t->key ) return root; // (A)-1: ���� key�� �ִ� ��� �Լ��� ������ �κ��� �ּ�ó����
		p = t; // �����带 �θ���� �ϰ�
			// �����带 ����
		if (key <= t->data) // (A)-2: ���� �۰ų� ���� ��� �������� �̵�
			t = t->left;
		else
			t = t->right;
	}

	n = (TreeNode*)malloc(sizeof(TreeNode));
	if (n == NULL) exit(1);
	// ������ ����
	n->data = key;
	n->left = n->right = NULL;

	// �θ� ���� ��ũ ����
	if (p != NULL)
		if (key <= p->data)
			p->left = n;
		else
			p->right = n;
	else // ���ʿ� Ʈ���� ����־�����
		root = n;

	return root;
}

void inorder(TreeNode* root)  // �������� ����
{
	if (root) {
		inorder(root->left);	// ���ʼ���Ʈ�� ��ȸ
		printf("%d ", root->data); 	// ��� �湮
		inorder(root->right);	// �����ʼ���Ʈ�� ��ȸ
	}
}

void preorder(TreeNode* root)  // �������� ����
{
	if (root) {
		printf("%d ", root->data); 	// ��� �湮
		preorder(root->left);	// ���ʼ���Ʈ�� ��ȸ
		preorder(root->right);	// �����ʼ���Ʈ�� ��ȸ
	}
}
void printCheck(TreeNode* node) // �������� ����
{
	preorder(node); printf("\n");
	inorder(node); printf("\n");
}

void replaceKeyValue(TreeNode* root, int oldKey, int newKey)
{
	//���� Ʈ��-2�� �ڵ带 ���� �ִ´�
	if (root != NULL) {
		if (root->data == oldKey) {
			root->data = newKey;
		}

		if (root->left != NULL)
			replaceKeyValue(root->left, oldKey, newKey);

		if (root->right != NULL)
			replaceKeyValue(root->right, oldKey, newKey);
	}
}

int calcMax(int a, int b) // �������� ����, �ʿ��ϸ� ���
{
	if (a <= b)
		return b;
	else
		return a;
}
int get_max(TreeNode* node) // �������� ����, �ʿ��ϸ� ���
{
	if (node)
		return calcMax(calcMax(node->data, get_max(node->left)), get_max(node->right));
	else
		return INT_MIN;
}

int calcMin(int a, int b)// �������� ����, �ʿ��ϸ� ���
{
	if (a <= b)
		return a;
	else
		return b;
}
int get_min(TreeNode* node) // �������� ����, �ʿ��ϸ� ���
{
	if (node)
		return calcMin(calcMin(node->data, get_min(node->left)), get_min(node->right));
	else
		return INT_MAX; //���� ū���� ��Ÿ���� ���
}

int isBST(TreeNode* node) // �ڵ� �ۼ�
{
	if (node != NULL) {
		if (node->left != NULL) {
			if (node->left->data > node->data)
				return 0;

			return isBST(node->left);
		}

		if (node->right != NULL) {
			if (node->right->data <= node->data)
				return 0;

			return isBST(node->right);
		}

		return 1;
	}
}

int main(void) // �������� ����
{
	int n;
	int oldKey, newKey;
	int key;

	TreeNode* root = NULL;

	scanf("%d", &n);
	while (n != -1) {
		root = insert_node(root, n);
		scanf("%d", &n);
	}

	for (int i = 0; i < 3; i++) {
		scanf("%d", &oldKey);
		scanf("%d", &newKey);
		replaceKeyValue(root, oldKey, newKey);
		printf("%d\n", isBST(root));
	}
}