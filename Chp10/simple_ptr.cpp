// simple_ptr.cpp

#include <iostream>

using namespace std;

int main(void) {
	int x = 5;
	int y = 10;

	// p = x를 가리킴
	int *p = &x;
	int* q = &y;
	cout << "x = " << x <<", " << "y = " << y << endl;
	cout << "x의 주소 = "<< p << ", " << "y의 주소 = " << q  << endl;

	// p를 이용해 x 값을 변경
	*p = 6;
	*q = *p * 2;
	cout << "x = " << x << ", " << "y = " << y << endl;
	cout << "x의 주소 = " << p << ", " << "y의 주소 = " << q << endl;

	int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7;
	int* h = &a, * i = &b, * j = &c, * k = &d, * l = &e, * m = &f, * n = &g;

	cout << endl << "변수의 주소: "
		<< "a = " << a << endl
		<< "b = " << b << endl
		<< "c = " << c << endl
		<< "d = " << d << endl
		<< "e = " << e << endl
		<< "f = " << f << endl
		<< "g = " << g << endl;
	
	cout << endl << "변수의 주소: "
		<< "h = " << h << endl
		<< "i = " << i << endl
		<< "j = " << j << endl
		<< "k = " << k << endl
		<< "l = " << l << endl
		<< "m = " << m << endl
		<< "n = " << n << endl;

	return 0;

}
