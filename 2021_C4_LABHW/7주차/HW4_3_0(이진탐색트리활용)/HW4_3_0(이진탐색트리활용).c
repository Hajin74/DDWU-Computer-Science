#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_STRING 100

typedef struct {
	int id;
	char name[MAX_STRING];
	char tel[MAX_STRING];
	char dept[MAX_STRING];
} element;

typedef struct TreeNode {
	element data;
	struct TreeNode* left, *right;
} TreeNode;

TreeNode* new_node(element item) {
	TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));

	temp->data = item;
	temp->left = temp->right = NULL;

	return temp;
}

TreeNode* insert_node(TreeNode* root, element data) {
	if (root == NULL)
		return new_node(data);

	if (data.id < root->data.id)
		root->left = insert_node(root->left, data);
	else if (data.id > root->data.id)
		root->right = insert_node(root->right, data);

	return root;
}

TreeNode* get_min(TreeNode* node) {
	TreeNode* current = node;

	while (current->left != NULL)
		current = current->left;

	return current;
}

TreeNode* delete_node(TreeNode* root, int key) {
	TreeNode* temp;

	if (root == NULL)
		return root;

	if (key < root->data.id)
		root->left = delete_node(root->left, key);
	else if (key > root->data.id)
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
		root->data = temp->data;
		root->right = delete_node(root->right, temp->data.id);
	}

	return root;
}

TreeNode* search(TreeNode* node, int key) {
	if (node == NULL)
		return NULL;

	if (key == node->data.id)
		return node;
	else if (key < node->data.id)
		return search(node->left, key);
	else
		return search(node->right, key);
}

void inorder(TreeNode* node) {
	if (node != NULL) {
		inorder(node->left);
		printf("---------------------------\n");
		printf("�й�: %d\n", node->data.id);
		printf("�̸�: %s\n", node->data.name);
		printf("��ȭ��ȣ: %s\n", node->data.tel);
		printf("�а�: %s\n", node->data.dept);
		inorder(node->right);
	}
}

int get_node_count(TreeNode* node) {
	int count = 0;

	if (node != NULL) {
		count = 1 + get_node_count(node->left) + get_node_count(node->right);
	}

	return count;
}

int main(void) {
	TreeNode* root = NULL;
	element ele;
	char choice;
	int id;

	do {
		printf("Enter i<nsert>, d<elete>, s<earch>, p<rint>,  c<count>, q<uit> : ");
		scanf("%c", &choice);

		switch (choice) {
			case 'i':

				printf("�й� �Է�: ");
				scanf("%d", &ele.id);
				printf("�̸� �Է�: ");
				scanf("%s", &ele.name);
				printf("��ȭ��ȣ �Է�: ");
				scanf("%s", &ele.tel);
				printf("�а� �Է�: ");
				scanf("%s", &ele.dept);

				root = insert_node(root, ele);
				break;

			case 'd':
				printf("������ �й� �Է�: ");
				scanf("%d", &id);
				root = delete_node(root, id);
				break;

			case 's':
				printf("Ž���� �й� �Է�:");
				scanf("%d", &id);
				TreeNode* temp = search(root, id);
				if (temp != NULL) {
					printf("------------------------------------\n");
					printf("�й�: %d\n", temp->data.id);
					printf("�̸�: %s\n", temp->data.name);
					printf("��ȭ��ȣ: %s\n", temp->data.tel);
					printf("�а�: %s\n", temp->data.dept);
				}
				else 
					printf("id�� %d�� �л��� �����ϴ�.\n", id);
				break;

			case 'p':
				printf("�л� ���� �й� �� ���\n");
				inorder(root);
				printf("\n");
				break;

			case 'c':
				printf("���� ����� �л��� �� ���� %d\n", get_node_count(root));
				break;
		}
		while (getchar() != '\n');
	} while (choice != 'q');
}