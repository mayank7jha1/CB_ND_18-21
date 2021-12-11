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
	Copy Constructor
	1.Its role is to create a copy of the constructor
	2.It exixts by Default and we do not need to create it.
	When do we need to Create own Copy Constructor?
	3.Copy Constructor by default creates what is called a shallow copy.
	4.We need to define our own constructor when we need a deep copy.

	Deep Copy is when you have a pointer that is pointing some resource that is externally
	for example a dynamic array in that case the copy constructor which is by default
	will cause problmems.
	If we have just the static array or the static variables we donot need our copy
	constructor.
*/

class Car {
	float price;
	const int minimum = 10;
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

	// Car c;
	// cout << sizeof(c) << endl;
	// cout << sizeof(Car) << endl;

	// c.name[0] = 'B';
	// c.name[1] = 'M';
	// c.name[2] = 'W';
	// c.name[3] = '\0';
	// c.condition = "Good";
	// c.set_price(1000);
	// c.model = 1;
	// c.print();

	// float discount;
	// cin >> discount;
	// discount = discount / 100;
	// c.apply_discount(discount);
	// cout << c.get_price() << endl;


	// Car d(2000, 2, "Benz", "Very Good");
	// d.print();

	// Car e(d);
	// e.print();

	Car c(2000, 2, "BMW", "Very Good", "Top Quality");//Paramaterised Constructor
	Car d(c);//Default Copy Constructor
	d.set_price(5000);

	/*Since the by default constructor points to the same block in the memory
	  hence the changes made in one will reflect in the another as they
	  (the both objects)  will store the same base address for the array as
	  they are pointed through pointers (Dynamic Array).
	*/
	d.engine[0] = 'Z';


	//Here everything is fine as it should be as the case of static array.
	d.name[0] = 'C';


	c.print();
	d.print();


	return 0;
}