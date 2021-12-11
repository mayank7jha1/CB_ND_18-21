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
	Copy Assignment
	1.Very Similar to Copy Constructor it also is present by default
	2.It is invoked when you copy using assignemnt i.e.
		Car d=c;//Copy Conctructor is called.
		Car d;
		d=c;//Here the copy Assignment is called.
	3.It suffers from the same problem as the copy constructor as it also
	makes a shallow copy so if you want to make changes in dynamic arrays or similar
	you have to define your own copy assignment operator.
	4.It can be called as many times as we want.
*/

class Car {
	float price;
	int minimum = 10;//static members cannot be used in default copy assignment
public:
	//These are the data members:
	int model;
	char name[20];
	string condition;
	char *engine;

	//Member Functions:
	void print() {
		cout << "Name of the Car is " << name << endl;
		cout << "Codition of the car is " << condition << endl;
		cout << "Model Number is " << model << endl;
		cout << "Price of the car is " << price << endl;
		cout << "The Condition of engine is " << engine << endl;
	}

	//Constructor
	Car() {
		cout << "Inside My own constructor" << endl;
	}

	//Paramaterised Constructor

	Car(int p, int m, char *n, string c, char *e) {
		if (p > minimum) {
			price = p;
		} else {
			price = minimum;
		}
		model = m;
		strcpy(name, n);
		condition = c;
		engine = new char[strlen(e) + 1];
		strcpy(engine, e);
	}
	//By Defining out own Everthing will work fine
	Car(Car &x) {
		cout << "Inside our Own Copy Constructor " << endl;
		if (x.price > minimum) {
			price = x.price;
		} else {
			price = minimum;
		}
		model = x.model;
		strcpy(name, x.name);
		condition = x.condition;
		//Deep Copy
		engine = new char[strlen(x.engine) + 1];
		strcpy(engine, x.engine);
	}
	// Copy Assignment
	void operator=(Car &x) {
		//Here Passing by reference and value is both fine but since we want to avoid
		//extra space we do by referencing.

		cout << "Inside our Own Copy Assignment " << endl;
		if (x.price > minimum) {
			price = x.price;
		} else {
			price = minimum;
		}
		model = x.model;
		strcpy(name, x.name);
		condition = x.condition;
		//Deep Copy
		engine = new char[strlen(x.engine) + 1];
		strcpy(engine, x.engine);

	}
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

	Car c(5000, 2, "BMW", "Good", "Top Quality");
	// Car d(c);
	Car d;
	d = c;

	d.engine[0] = 'Z';
	c.print();
	d.print();

	return 0;
}