//Shivam Kumar 555585 BSCS-15-D

#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* top = nullptr;

void push(int value) {
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = top;
	top = newNode;
}

void pop() {
	if (top == nullptr) {
		cout << "Stack Empty." << endl;
		return;
	}
	Node* curr = top;
	int poppedValue = curr->data;
	top = top->next;
	delete curr;
	cout << "Popped: " << poppedValue << endl;
}

int peek() {
	if (top == nullptr) {
		cout << "Stack is empty" << endl;
		return -1;
	}
	return top->data;
}

void display() {
	Node* curr = top;
	cout << "Top of the Stack" << endl;
	while (curr != nullptr) {
		cout << curr->data << endl;
	}
}


void main() {
	
	cout << "--- Pushing Elements ---" << endl;
	push(5);
	push(15);
	push(25);

	// 2. Display from top to bottom
	display();

	// 3. Pop once
	cout << "--- Popping Once ---" << endl;
	pop();

	// 4. Peek the top element
	cout << "\n--- Peeking ---" << endl;
	cout << "Peeked Top Element: " << peek() << endl;

	// 5. Test an empty pop (Underflow)
	cout << "\n--- Testing Empty Pop (Underflow) ---" << endl;
	while (top != nullptr) {
		pop(); // Empty the rest of the stack
	}
	pop(); // Try popping from an already empty stack

	// 6. Push elements back and release all remaining nodes before exit
	cout << "\n--- Memory Cleanup Test ---" << endl;
	push(100);
	push(200);

	// Release remaining nodes before exit to prevent memory leaks
	while (top != nullptr) {
		Node* temp = top;
		top = top->next;
		delete temp;
	}
	cout << "All remaining nodes released successfully." << endl;

	return 0;
}						
