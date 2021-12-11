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
	Destructors:
	1.These are there to clear out memory that is created by the object.
	2.It is called automatically when the object goes out of scope except for the cases
	when we have a dynamic allocated arrays or sort of.
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

	// ~Car() {
	// 	cout << "Inside Destructor of class " << name << endl;
	// }
	~Car() {
		//Object that is created last will be destroyed last.
		cout << "Destroying the dynamic array " << endl;
		if (engine != NULL) {
			delete [] engine;
		}
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// Car c(5000, 2, "BMW", "Good", "Top Quality");
	// // Car d(c);
	// Car d;
	// d = c;

	// d.engine[0] = 'Z';

	// c.print();
	// d.print();
	//Now lets create a dynamic object of a car

	Car *e = new Car(6000, 3, "Ferrari", "V.Good", "Top Notch");

	/*Here e.print does not make sense as c.print() means you have
	  a object and you can do so but now e is a pointer which is
	  pointing to the heap memory and hence you can either use:
	  (*e) that will give you the object by deferencing or you can use
	  -> .
	*/

	(*e).print();
	e->print();//This means that we are using a pointer variable e.

	//Now if you want to delete this you can use the keyword
	delete e;

	return 0;
}