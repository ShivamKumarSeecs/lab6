//Shivam Kumar 555585 BSCS-15-D

#include <iostream>
using namespace std;

int items[5] = { 1, 2, 3, 4, 5 };
int top = -1;

void push(int value) {
	if (top + 1 >= 5) {
		cout << "Stack full." << endl;
		return;
	}
	items[++top] = value;
	
}

void pop() {
	if (top == -1) {
		cout << "Stack empty." << endl;
		return;
	}
	cout << "Popped: " << items[top--] << endl;
}

int peek() { 
	return items[top];
}

void display() {
	cout << "TOP" << endl;
	for (int i = top; i >= 0; i--) {
		cout << items[i] << endl;
	}
}



void main() {
	
	push(10);
	push(20);
	push(30);

	display();

	pop();

	cout << "Top of Stack: " << peek() << endl;

	push(40);
	push(50);
	push(60);
	push(70);
}						
