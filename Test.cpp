#include "Test.h"
Test::Test(int a, string b) {
	this->a = a;
	this->b = b;
}
Test::~Test() {
	//cout << "Destroyed";
}
void Test::print() {

	cout << a << " | " << b << endl;
}