#include<iostream>
using namespace std;
//task1

class Fraction {
private:
	int numerator; 
	int denominator;
public:
	void init(int num, int don) { numerator = num; denominator = don; };
	Fraction Multiply(const Fraction& other) {
		Fraction f;
		f.numerator = this->numerator * other.numerator;
		f.denominator = this->denominator * other.denominator;
		return f;

	};
	Fraction Add(const Fraction& other) {
		Fraction f;
		f.numerator = this->numerator * other.denominator+this->denominator*other.numerator;
		f.denominator = this->denominator * other.denominator;
		return f;
	}; 
	Fraction Minus(const Fraction& other) {
		Fraction f;
		f.numerator = this->numerator * other.denominator - this->denominator * other.numerator;
		f.denominator = this->denominator * other.denominator;
		return f;
	}; 
	Fraction Divide(const Fraction& other) {
		Fraction f;
		f.numerator = this->numerator * other.denominator;
		f.denominator = this->denominator * other.numerator;
		return f;
	}; 
	void Print() {
		cout << numerator << " / " << denominator << endl;
	}
};
void main() {
	Fraction f1;
	f1.init(4, 7);
	Fraction f2;
	f2.init(4, 7);
	Fraction result = f1.Multiply(f2);
	result.Print();
	Fraction result2 = f1.Divide(f2);
	result2.Print();
	Fraction result3 = f1.Add(f2);
	result3.Print();
	Fraction result4 = f1.Minus(f2);
	result4.Print();
}


//Task 2:
//Point class yazilsin
//x, y fieldleri olsun ve her bir field uchun getter setterler yazilsin.
//constructor parametric, default
//Print method - u yazilsin

class Point {
	int x;
	int y;
public:
	Point() { x = 0; y = 0; }
	Point(int argX, int argY) {
		SetX(argX);
		SetY(argY);
	}

	int GetX() { return x; }
	int GetY() { return y; }

	void SetX(int argX) { x = argX; }
	void SetY(int argY) { y = argY; }
	void Print() {
		cout << "X: " << x << "\nY: " << y << endl;
	}
};
void main() {
	Point p;
	p.Print();
}
