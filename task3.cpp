//Shivam Kumar 555585 BSCS-15-D

#include <iostream>
#include <string>
using namespace std;

char stack[20]; // char stack of size 20
int top = -1;

// push char onto stack
void push(char c) {
	if (top < 19) {
		stack[++top] = c;
	}
}

// pop char from stack
char pop() {
	if (top >= 0) {
		return stack[top--];
	}
	return '\0';
}

int main() {
	string word;

	cout << "enter a word: ";
	cin >> word;

	// check length before pushing
	if (word.length() > 20) {
		cout << "word is too long" << endl;
		return 0;
	}

	// push each character into stack
	for (int i = 0; i < word.length(); i++) {
		push(word[i]);
	}

	// pop and print to reverse
	cout << "reversed word: ";
	for (int i = 0; i < word.length(); i++) {
		cout << pop();
	}
	cout << endl;

	return 0;
}
