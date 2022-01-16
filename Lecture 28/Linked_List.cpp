// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

//Ek block kaisa bana hain: ek basic block of list is known as node:
class node {
public:
	int data;
	node *next;//Self Referencing Pointer 1.
	// Constructor:
	node(int inputdata) {
		data = inputdata;
		next = NULL;
	}
};

void InsertAtHead(node *&head, int value) {
	node *n = new node(value);
	n->next = head;
	head = n;
}

void Print(node *head) {
	node *temp = head;
	//Iterate:
	while (temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
}

int length(node *head) {
	int len = 0;
	node *temp = head;
	//Iterate:
	while (temp != NULL) {
		len++;
		temp = temp->next;
	}
	return len;
}

void InsertAtTail(node*&head, int value) {
	if (head == NULL) {
		head = new node(value);
		return;
	}
	node *temp = head;
	//Tum last me rukna chahte ho!:
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = new node(value);
	return;
}

void InsertAtAnyPosition(node *&head, int pos, int value) {
	int length1 = length(head);
	if (pos == 0) {
		InsertAtHead(head, value);
	} else if (pos == length1 + 1) {
		InsertAtTail(head, value);
	} else {
		node *temp = head;
		node *n = new node(value);
		for (int jump = 1; jump < pos; jump++) {
			temp = temp->next;
		}
		n->next = temp->next;
		temp->next = n;
	}
}

bool searchIterative(node *head, int key) {
	node *temp = head;//Initialisation:

	while (temp != NULL) {//condition i<n
		if (temp->data == key) {
			return true;
		} else {
			temp = temp->next;//i++
		}
	}
	return false;
}

bool searchRecursive(node *head, int key) {
	node *temp = head;
	if (temp == NULL) {
		return false;
	}

	if (temp->data == key) {
		return true;
	} else {//temp->next=i+1
		return searchRecursive(temp->next, key);
	}
}

//Print the mid point of the link list:

int midPoint(node *head) {
	int mid = length(head);
	mid = mid / 2;

	node*temp = head;
	while (mid > 0) {
		temp = temp->next;
		mid--;
	}
	return temp->data;
}

node *midPoint1(node *head) {
	int mid = length(head);
	mid = mid / 2;

	node*temp = head;
	while (mid > 0) {
		temp = temp->next;
		mid--;
	}
	return temp;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	node *head = NULL;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		InsertAtTail(head, x);
	}
	Print(head);
	cout << endl;

	InsertAtAnyPosition(head, 4, 15);
	Print(head);
	cout << endl;
	cout << length(head) << endl;
	cout << searchRecursive(head, 15) << endl;
	cout << midPoint(head) << endl;

	node *value = midPoint1(head);
	cout << value->data << endl;


	return 0;
}