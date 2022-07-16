#include"Test.h"

int main() {

	stack<Test> teststack;
	queue<Test> testqueue;

	teststack.push(Test(2, "C"));
	teststack.push(Test(2, "D"));
	teststack.push(Test(1, "A"));

	cout << endl;

	while (teststack.size() > 0) {

		Test& test1 = teststack.top();
		test1.print();
		teststack.pop();

	}

	testqueue.push(Test(2, "E"));
	testqueue.push(Test(2, "F"));
	testqueue.push(Test(2, "G"));

	cout << endl;

	while (testqueue.size() > 0) {

		Test& test2 = testqueue.front();
		test2.print();
		testqueue.pop();

	}
}