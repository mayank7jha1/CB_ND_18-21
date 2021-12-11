#include <bits/stdc++.h>
using namespace std;

/*
	Four Different Functions that are always inside the class by default:
	1.Constructor
	2.Copy Constructor
	3.Copy Assigment Operator
	4.Destructor
*/

/*
	Constructor:
	1.This in class is responsible for creating an object.
	  So how we want to create an object can also be done with this,i.e. we can
	  initialise the data members of the class through constructor.
	2.This gets called automoatically whenever we create an object and only once.
	3.To define your own constructor define a function that has same name as the
	  class.
*/

class Car {
	float price;
	const int minimum = 10;
public:
	//These are the data members:
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

	//Constructor
	Car() {
		cout << "Inside My own constructor" << endl;
	}

	//Paramaterised Constructor

	Car(int p, int m, char *n, string c) {
		if (p > minimum) {
			price = p;
		} else {
			price = minimum;
		}
		model = m;
		strcpy(name, n);
		condition = c;
	};

	//This is when we want to change and return the price
	float get_discount(float x) {
		return price * (1.0 - x);

	}
	//This is when we don't want to return the price.
	void apply_discount(float x) {
		price = price * (1.0 - x);
	}

	//Getter
	float get_price() {
		return price;
	}

	//Setter
	void set_price(float x) {
		int minimum = 10;
		if (x < minimum) {
			price = minimum;
		} else {
			price = x;
		}
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
	c.name[3] = '\0';
	c.condition = "Good";
	c.set_price(1000);
	c.model = 1;
	c.print();

	float discount;
	cin >> discount;
	discount = discount / 100;
	c.apply_discount(discount);
	cout << c.get_price() << endl;


	Car d(2000, 2, "Benz", "Very Good");
	d.print();

	return 0;
}