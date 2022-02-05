// Created by Mayank

#include <bits/stdc++.h>
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

class Pair {
public:
	int height;
	int diameter;
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


void mirror(node *&root) {
	if (root == NULL) {
		return;
	}
	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}
int height(node *root) {//O(N)
	if (root == NULL) {
		return 0;
	}

	int lh = height(root->left);
	int rh = height(root->right);
	return max(lh, rh) + 1;
}


int diameter(node *root) {//O(n^2)
	if (root == NULL) {
		return 0;
	}

	int option1 = diameter(root->left);
	int option2 = diameter(root->right);
	int option3 = height(root->left) + height(root->right);
	return max(option1, max(option2, option3));
}

Pair fastdiameter(node *root) {
	Pair p;
	if (root == NULL) {
		p.diameter = 0, p.height = 0;
		return p;
	}

	Pair left_subtree = fastdiameter(root->left);
	Pair right_subtree = fastdiameter(root->right);

	p.height = max(left_subtree.height, right_subtree.height) + 1;
	//p.diameter = max(left_subtree.height + right_subtree.height, max(left_subtree.diameter, right_subtree.diameter));
	p.diameter = max({left_subtree.height + right_subtree.height, left_subtree.diameter, right_subtree.diameter});
	return p;
}

class Pair2 {
public:
	int height;
	bool isbalanced;
};

Pair2 isheightBalanced(node *root) {
	Pair2 p;
	if (root == NULL) {
		p.height = 0;
		p.isbalanced = true;
		return p;
	}

	Pair2 left_subtree = isheightBalanced(root->left);
	Pair2 right_subtree = isheightBalanced(root->right);

	p.height = max(left_subtree.height, right_subtree.height) + 1;
	if (abs(left_subtree.height - right_subtree.height) <= 1 and (left_subtree.isbalanced == 1) and (right_subtree.isbalanced) == 1) {
		p.isbalanced = true;
	} else {
		p.isbalanced = false;
	}
	return p;
}


void printkthlevel(node *root, int k) {
	if (root == NULL) {
		return;
	}
	if (k == 1) {
		cout << root->data << " ";
	}
	printkthlevel(root->left, k - 1);
	printkthlevel(root->right, k - 1);
}


void printAllLevel(node *root) {
	int H = height(root);
	for (int i = 1; i <= H; i++) {
		printkthlevel(root, i);
		cout << endl;
	}
}


void bfs(node *root) {
	queue<node*>q;
	q.push(root);
	while (!q.empty()) {
		node *f = q.front();
		cout << f->data << " ";
		q.pop();
		if (f->left) {
			q.push(f->left);
		}
		if (f->right) {
			q.push(f->right);
			//cout << endl;
		}
	}
	return;
}


void bfs2(node *root) {
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while (!q.empty()) {
		node *first = q.front();
		if (first == NULL) {
			cout << endl;
			q.pop();
			if (!q.empty()) {
				q.push(NULL);
				/*
					This means you have already inserted all the
					children nodes of the previous level into the
					queue.
					So this means that you have to insert NULL
					so as to differentiate between two level
					with a endl.
				*/
			}
		} else {
			cout << first->data << " ";
			q.pop();
			if (first->left) {
				q.push(first->left);
			}
			if (first->right) {
				q.push(first->right);
				//cout << endl;
			}
		}
	}
	return;
}

node *buildTreefromarray(int *a, int s, int e) {
	if (s > e) {
		return  NULL;
	}
	int mid = (s + e) / 2;
	node *root = new node(a[mid]);
	root->left = buildTreefromarray(a, s, mid - 1);
	root->right = buildTreefromarray(a, mid + 1, e);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//node *root = buildTree();
	//Print(root);
	//cout << endl;
	// preorder(root);
	// cout << endl;
	// inorder(root);
	// cout << endl;
	// postorder(root);
	// cout << endl;
	// cout << countnodes(root) << endl;
	// cout << sumofNodes(root) << endl;
	// printkthlevel(root, 3);
	// cout << endl;
	// printAllLevel(root);
	// cout << endl;
	// bfs(root);
	// cout << endl;
	// bfs2(root);
	// cout << endl;

	// Pair p = fastdiameter(root);
	// cout << p.height << " " << p.diameter << endl;
	// Pair2 p = isheightBalanced(root);
	// cout << p.height << " " << p.isbalanced << endl;

	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int n = 7;
	node *root = buildTreefromarray(a, 0, n - 1);
	Print(root);
	return 0;
}