#include<iostream>
using namespace std;
#include<string>


string convert(string s) {

	// Stop
	if (s.length() == 0 or s.length() == 1) {
		return s;
	}
	if (s[0] == 'p' and s[1] == 'i') {
		return "3.14" + convert(s.substr(2));
	} else {

		return s[0] + convert(s.substr(1));
	}

}


int main() {
	string s;
	cin >> s;

	cout << convert(s);
}