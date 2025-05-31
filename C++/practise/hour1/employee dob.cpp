#include <iostream>
using namespace std;

class Number {
	int a;

public:
	Number() {
		a = 0;
	}
	Number(int A) {
		a = A;
	}

	bool operator==(Number &A) {
		return this->a == A.a;
	}

	int operator+(Number &A) {
		return this->a + A.a;
	}
	int operator-(Number &A) {
		return this->a - A.a;
	}
	int operator*(Number &A) {
		return this->a * A.a;
	}
	double operator/(Number &A) {
		double c = this->a;
		return c / A.a;
	}
	int operator&(Number &A) {
		return this->a & A.a;
	}
	int operator^(Number &A) {
		return this->a ^ A.a;
	}
	int operator|(Number &A) {
		return this->a | A.a;
	}
	int operator%(Number &A) {
		return this->a % A.a;
	}

	// Corrected: Logical NOT (unary)
	bool operator!() {
		return this->a;
	}
	// Remove incorrect member operator<< overload
	friend ostream& operator<<(ostream& out, const Number& num) {
		out << num.a;
		return out;
	}
	// Corrected: Assignment operator
	Number& operator=(int val) {
		this->a = val;
		return *this;
	}
};

int main() {
	Number a(9), b(5);

	(a == b) ? cout << "true\n" : cout << "false\n";
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;

	cout << (a & b) << endl;// bitwise and gate
	cout << (a | b) << endl;// bitwise or gate

	cout << (a % b) << endl;// bitwise mod gate
	cout << (a ^ b) << endl;// bitwise xor gate
	// cout << (a == b) << endl;  // Calls equality operator
	a = 11;  // Calls assignment operator
	cout << a << endl;  // Outputs the value of a after assignment

	cout << (!a)+1 << endl;  // Calls unary !

	return 0;
}
