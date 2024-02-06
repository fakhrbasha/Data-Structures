#include <iostream>
#include <string>
#include <cstdlib>
#include <print>

using namespace std;
const int mxsize = 100;
template <class t>
class stack {
	t top;
	t item[mxsize];
public:
	stack(): top(-1) {}
	void push(t element) {
		if (top >= mxsize-1) {
			cout << "Stack If Full";
		}
		else {
			top++;
			item[top] = element;
		}
	}
	bool isEmpty() const { // check stack is empty or no
		if (top == -1) {
			return true;
		}
		else {
			return false;
		}
	}
	void pop() {
		if (isEmpty()) {
			cout << "Stack empty";
		}
		else {
			top--;
		}
	}
	void pop(t &element) {
		if (isEmpty()) {
			cout << "Stack empty";
		}
		else {
			item[top] = element;
			top--;
		}
	}
	void getTop(t& element) {
		if (isEmpty()) {
			cout << "stack is Empty";
		}
		else
			element = item[top];
		cout << element << endl;
	}
	void print() const {
		cout << " [ ";
		for (int i = top; i >= 0; i--) {
			cout << item[i] << " ";
		}
		cout << " ] "; 
		cout << endl;
	}
};
int main() {
	stack <char > s;
	s.push('m'); //m
	s.push('e'); // e m
	s.push('m'); // m e m
	s.push('o'); // o m e m
	s.pop(); // m e m
	s.print(); // m e m
	
	/*
	
	|		|
	|	o	|    LAST IN FIRST OUT 
	|	m	|
	|	e	|
	|	m	|
	__________

	*/



}


