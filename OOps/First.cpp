// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

class Car {
public:
	//These are the data members:
	float price;
	int model;
	char name[20];
	string condition;

	//Member Functions:
	void print() {
		cout << "Name of the Car is " << name << endl;
		cout << "Codition of the car is " << condition << endl;
		cout << "Model Number is " << model << endl;
		cout << "Price of the car is " << price << endl;
	}

	//This is when we want to change and return the price
	float get_discount(float x) {
		return price * (1.0 - x);

	}
	//This is when we don't want to return the price.
	void apply_discount(float x) {
		price = price * (1.0 - x);
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Car c;
	cout << sizeof(c) << endl;
	cout << sizeof(Car) << endl;

	c.name[0] = 'B';
	c.name[1] = 'M';
	c.name[2] = 'W';
	c.condition = "Good";
	c.price = 1000;
	c.model = 1;
	c.print();

	float discount;
	cin >> discount;
	discount = discount / 100;
	cout << c.get_discount(discount) << endl;

	cout << c.price << endl;



	return 0;
}