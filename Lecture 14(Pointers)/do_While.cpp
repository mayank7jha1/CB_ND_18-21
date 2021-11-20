// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	do {
		cout << "Mayank" << endl;
		n--;
	} while (n > 10);

	if (n > 10) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	(n > 10) ? cout << "Yes" << endl : cout << "No" << endl;

	//In switch Constant values or constant expressions are allowed i.e. 1+2%10
	//Variables are allowed provided there values are assigned before only
	//Run time is not allowed;  switch(cin>>x) not allowed

	int x1 = 2 ;
	switch (x1)
	{
	case 1:
		cout << "Choice is 1";
		break;
	case 2:
		cout << "Choice is 2";
		break;
	case 3:
		cout << "Choice is 3";
		break;
	default:
		cout << "Choice other than 1, 2 and 3";
		break;
	}


	return 0;
}