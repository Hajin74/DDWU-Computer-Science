#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct TreeNode {
	int key;
	struct TreeNode* left, * right;
} TreeNode;

// ���ο� Ʈ����带 �����ؼ� ��ȯ
TreeNode* new_node(int item) {
	TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));

	temp->key = item;
	temp->left = temp->right = NULL;

	return temp;
}

// ���� ��ȸ
void inorder(TreeNode* root) {
	if (root) {
		inorder(root->left);
		printf("[%d] ", root->key);
		inorder(root->right);
	}
}

// Ž��(recursive version)
TreeNode* search(TreeNode* node, int key) {
	if (node == NULL)
		return NULL;

	if(key == node->key)
		return node;
	else if (key < node->key)
		return search(node->left, key);
	else
		return search(node->right, key);
}

// ����(recursive version)
TreeNode* insert_node(TreeNode* root, int key) {
	// Ʈ���� �����̸� ���ο� ��带 ��ȯ
	if (root == NULL)
		return new_node(key);

	// �׷��� ������ ��ȯ������ Ʈ���� ��������.
	if (key < root->key)
		root->left = insert_node(root->left, key);
	else if (key > root->key)
		root->right = insert_node(root->right, key);

	// ����� ��Ʈ �����͸� ��ȯ�Ѵ�. 
	return root;
}

// ����Ž��Ʈ������ ���� ���� ���� �������� ������ ���� ��
TreeNode* min_value_node(TreeNode* node) {
	TreeNode* current = node;

	while (current->left != NULL)
		current = current->left;
	
	return current;
}

// ����(recursive version)
TreeNode* delete_node(TreeNode* root, int key) {
	TreeNode* temp;

	if (root == NULL)
		return root;

	if (key < root->key)
		root->left = delete_node(root->left, key);
	else if (key > root->key)
		root->right = delete_node(root->right, key);

	// key == root->key
	else { 
		// ���1(�ܸ� ���), ���2(one_leaf)
		if (root->left == NULL) {
				TreeNode* temp = root->right;
				free(root);
				return temp;
		}
		else if (root->right == NULL) {
			TreeNode* temp = root->left;
			free(root);
			return temp;
		}

		// ���3(two_left)
		temp = min_value_node(root->right);
		root->key = temp->key; // �İ� ��� ����
		root->right = delete_node(root->right, temp->key); // �İ� ��� ����
	}

	return root;
}

int main(void) {
	TreeNode* root = NULL;
	TreeNode* tmp = NULL;

	root = insert_node(root, 30);
	root = insert_node(root, 20);
	root = insert_node(root, 10);
	root = insert_node(root, 40);
	root = insert_node(root, 50);
	root = insert_node(root, 60);

	printf("���� Ž�� Ʈ�� ���� ��ȸ ��� \n");
	inorder(root);
	printf("\n\n");

	if (search(root, 30) != NULL)
		printf("���� Ž�� Ʈ������ 30�� �߰��� \n");
	else
		printf("���� Ž�� Ʈ������ 30�� �߰߸��� \n");

	root = delete_node(root, 40);
	inorder(root);

	return 0;
}