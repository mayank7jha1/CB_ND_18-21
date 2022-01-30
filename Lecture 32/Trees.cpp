// Created by Mayank

#include <iostream>
using namespace std;

class node {
public:
	int data;
	node *left;
	node *right;
	node (int inputdata) {
		data = inputdata;
		left = NULL;
		right = NULL;
	}
};

node *buildTree() {
	int value;
	cin >> value;
	if (value == -1) {
		return NULL;
	} else {
		node *root = new node(value);
		root ->left = buildTree();//Subtree banao:
		root->right = buildTree();
		return root;
	}
}


void preorder(node *root) {
	if (root == NULL) {
		return;
	}

	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node *root) {
	if (root == NULL) {
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(node *root) {
	if (root == NULL) {
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

int countnodes(node *root) {
	// Base Case:

	if (root == NULL) {
		return 0;
	}
	int x = countnodes(root->left);
	int y = countnodes(root->right);
	int ans = x + y + 1;
	return ans;
}

int sumofNodes(node *root) {
	if (root == NULL) {
		return 0;
	}

	int x = sumofNodes(root ->left);
	int y = sumofNodes(root->right);
	int ans = x + y + root->data;
	return ans;
}

void Print(node *root) {//Iterate:
	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	Print(root->left);
	Print(root->right);
}

int height(node *root) {//O(N)
	if (root == NULL) {
		return 0;
	}

	int lh = height(root->left);
	int rh = height(root->right);
	return max(lh, rh) + 1;
}

void mirror(node *&root) {
	if (root == NULL) {
		return;
	}
	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}



int diameter(node *root) {//O(n^2)
	if (root == NULL) {
		return 0;
	}

	int option1 = diameter(root->left);
	int option2 = diameter(root->right);
	int option3 = height(root - left) + height(root->right);
	return max(option1, option2, option3);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	node *root = buildTree();
	//Print(root);
	//cout << endl;
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	cout << countnodes(root) << endl;
	cout << sumofNodes(root) << endl;

	return 0;
}