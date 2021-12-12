// Created by Mayank

#include <iostream>
#include"vector1.h" //Whenever we are using the user defined class we use double quotes.
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// vector v;
	//Now since we are using the template we have to use this <>
	vector<string>v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;
		v.push_back(x);
	}

	v.pop_back();

	v.push_back("Rahul");

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	return 0;
}