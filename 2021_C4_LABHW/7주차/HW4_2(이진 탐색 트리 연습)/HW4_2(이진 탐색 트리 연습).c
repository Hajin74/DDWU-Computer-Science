#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct TreeNode {
	element key;
	struct TreeNode* left, * right;
} TreeNode;

TreeNode* new_node(int item) {
	TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));

	temp->key = item;
	temp->left = temp->right = NULL;

	return temp;
}

TreeNode* get_max(TreeNode* node) {
	TreeNode* current = node;

	while (current->right != NULL)
		current = current->right;

	return current;
}

TreeNode* get_min(TreeNode* node) {
	TreeNode* current = node;

	while (current->left != NULL)
		current = current->left;

	return current;
}

TreeNode* insert_node(TreeNode* root, int key) {
	if (root == NULL)
		return new_node(key);

	if (key < root->key)
		root->left = insert_node(root->left, key);
	else if (key > root->key)
		root->right = insert_node(root->right, key);

	return root;
}

TreeNode* delete_node(TreeNode* root, int key) {
	TreeNode* temp;

	if (root == NULL)
		return root;

	if (key < root->key)
		root->left = delete_node(root->left, key);
	else if (key > root->key)
		root->right = delete_node(root->right, key);
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
		temp = get_min(root->right);
		root->key = temp->key; 
		root->right = delete_node(root->right, temp->key); 
	}

	return root;
}

TreeNode* search(TreeNode* node, int key) {
	if (node == NULL)
		return NULL;

	if (key == node->key)
		return node;
	else if (key < node->key)
		return search(node->left, key);
	else
		return search(node->right, key);
}

void preorder(TreeNode* node) {
	if (node != NULL) {
		printf("%d ", node->key);
		preorder(node->left);
		preorder(node->right);
	}
}

int get_height(TreeNode* node) {
	int height = 0;

	if (node != NULL) {
		height = 1 + max(get_height(node->left), get_height(node->right));
	}

	return height;
}

int get_node_count(TreeNode* node) {
	int count = 0;

	if (node != NULL) {
		count = 1 + get_node_count(node->left) + get_node_count(node->right);
	}

	return count;
}

int main(void) {
	TreeNode* root = NULL, *temp = NULL;
	int key;
	char choice;

	do {
		printf("Enter i<nsert>, d<elete>, s<earch>, p<rint>, h<eight>, c<count>, m<ax>, n<min>, q<uit> : ");
		scanf("%c", &choice);

		switch (choice) {
			case 'i':
				printf("������ key�� �Է�: ");
				scanf("%d", &key);
				root = insert_node(root, key);
				break;

			case 'd':
				printf("������ key�� �Է�: ");
				scanf("%d", &key);
				root = delete_node(root, key);
				break;

			case 's':
				printf("Ž���� key�� �Է�: ");
				scanf("%d", &key);
				temp = search(root, key);

				if (temp)
					printf("����\n");
				else
					printf("����\n");
				
				break;

			case 'p':
				preorder(root);
				printf("\n");
				break;

			case 'h':
				printf("Ʈ���� ���̴� %d\n", get_height(root));
				break;

			case 'c':
				printf("����� ������ %d\n", get_node_count(root));
				break;

			case 'm':
				printf("���� ū ���� %d\n", get_max(root)->key);
				break;

			case 'n':
				printf("���� ���� ���� %d\n", get_min(root)->key);
				break;
		}

		while (getchar() != '\n');
	} while (choice != 'q');
}