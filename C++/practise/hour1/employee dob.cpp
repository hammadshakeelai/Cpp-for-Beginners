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
		return !this->a;
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
	cout << (a & b) << endl;
	cout << (a | b) << endl;
	cout << (a % b) << endl;
	cout << (a ^ b) << endl;
	cout << (!a) << endl;  // Calls unary !

	return 0;
}
