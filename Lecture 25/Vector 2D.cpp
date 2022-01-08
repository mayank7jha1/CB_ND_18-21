// Created by Mayank

#include <bits/stdc++.h>
using namespace std;
/*
	1.	Vector of Vector or also known as 2'D Vector:
		It will exactly work as the 2D array.
		Intialisation:

		1.	vector<vector<int>>v;

			Here we can push_back a vector in the 2D vector v;
			Example:
			vector<int>z{1,2,3,4};
			vector<int>x{6,7,8,9,10};

			We can use :
			v.push_back(z);
			v.push_back(x);

		2.	vector<vector<int>>v{{1,2,3},{2,3,4},{3,4,5}};

		3.	vector<vector<int>> vec( n , vector<int> (m, 0));
			This means that the above vector has n rows and m column
			and every bucket is initialised with the value 0.


	2.	Array of Vectors: vector<int>v[10];
		Here Each row contains a vector of variable length.


	3. 2D Dynamic Arrays:

		int **a;
		int row,col;
		cin>>row>>col;

		a=new int*[r];
		for(int i=0;i<n;i++){
			a[i]=new int [c]{0};
		}

*/
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	return 0;
}