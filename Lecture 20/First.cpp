// Created by Mayank

#include <iostream>
#include<vector>//Vector class for using vectors.
using namespace std;
/*									Vector
	1.Vector is basically a dynamic array which keeps on increasing in size
	  as we put elements to it.(It basically doubles its size when it becomes
	  full but we don't need to worry about vector sizes as it is internally
	  managed by the vector class.)

*/
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	// Some ways to initialise a Vector
	vector<int>v;
	vector<int>v1(5);//Make a vector of 5 buckets.
	vector<int>v2(5, 10);//Make a vector of 5 buckets and initialise it with 10.
	vector<int>v3(v2.begin(), v2.end());//Copy all the elements of v2 to v3.
	vector<int>v4{1, 2, 3, 4, 5};//Direct Initialization.


	/*Iterators :
		 These are basically tool which help us iterate over any container.([begin,end));
		 There are various types of it and its functionalities are already defined so you don't
		 need to worry about it.
	*/

	/*
		Iterating Over a Vector: You can do as you do it in the case of arrays or you can do so by
		iterators both works fine.
	*/

	// Example:
	vector<int>a{1, 2, 3, 4, 5};
	/*
		1.Basic Way as you do when in the case of arrays.
	*/
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	/*
		2.With the help of Iterators:
	*/
	/*
		Here auto represent the type of the iterator it is going to represent so its type is
		" vector<int>::iterator it " this is as we are using a vector container and then
		in the vector container we are using an iterator class.(Try changing it, it will work fine
		i.e. copy the content in the quotes in the second line and replace it with auto.)
	*/
	for (auto it = a.begin(); it != a.end(); it++) {
		cout << (*it) << " ";
	}
	cout << endl;
	/*
		3.With the help of foreach loop but remember to use this only when you want to do
		  something over each and everyelement of the vector, just like here we want to print
		  each and every element of the loop so it can work fine but it fails when we want
		  to be selective or want to do something over just a small part of the vector.
	*/
	/*
		In this case auto represent the type of x which represent the every element in the vector is of the
		type this. which here is integer and hence auto will here represent integer so if you change auto
		to int here it would not make any difference.
	*/
	for (auto x : a) {
		cout << x << " ";
	}
	cout << endl;

	/*
		Now taking inputs in the vector:
		Now this has two types basically when you don't know the size of the vector and when you
		know the size.
	*/


	/*
		1.When you don't know the size of the vector:
			You have to use a function that is defined in the vector class i.e.
			vector_name.push_back(element).
	*/

	/*Example:*/
	int n;
	cin >> n;
	vector<int>b;
	for (int i = 0; i < n; i++) {
		// Here vector don't work as a array as we have not defined the size in the vector
		//Hence to take input you have to use the push_back function.
		int x;
		cin >> x;
		b.push_back(x);

		/*	Here we have taken elements one by one from the user and then put them in the
			vector.
		*/
	}


	/*
		2.We don't need to do this when we define the size of the vector because in that
		  case it works exactly like a array.
	*/

	vector<int>c(n);//Here size is defined hence it will work like a array only.
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}

	/*
		So what have we learnt from this is that we should specify the size of the vector whenever
		we can but there are times when we don't know the size in that case the push_back function
		comes in handy.
	*/

	/*
		Certain Functions in Vectors:
		push_back()
		pop_back()
		vector_name.insert(vector_name.begin()+4,20); It will insert 20 after 4 elements.
		vector_name.insert(vector_name.begin()+4,4,20); It will insert 4 elements 20 after the 4th element
		Example:
		Initial Vector: 1 2 3 4 5 6 7 8
		Output:         1 2 3 4 20 20 20 20 5 6 7 8

		vector_name.erase(vector_name.begin()+2);It will erase the element on the index 2.
		vector_name.erase(vector_name.begin()+2,vector_name.begin()+5); It will erase the elements from the
		second index till the index 5.(Check yourself also please).

		vector_name.clear();To clear all the elements.

		To check if the vector is empty or not we can use vector_name.empty() it will return true if the
		vector is empty else it will return false.

		vector_name.front();For the front element

		vector_name.back();For the back element


	*/

	cout << c.size() << endl;//Gives the exact size of the vector
	cout << c.capacity() << endl;//Gives the capacity of the vector which is different from size in certain situations.
	cout << c.max_size() << endl;//Maximum size a vector can take.

	vector<int>m{1, 2, 4, 5, 6, 7, 8};
	cout << m.at(4) << endl;
	return 0;
}