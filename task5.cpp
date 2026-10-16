//Shivam Kumar 555585 BSCS-15-D
// shivam kumar 555585 bscs-15-d

#include <iostream>
using namespace std;

int items[5];
int front = -1;
int rear = -1;

// add customer to queue
void enqueue(int value) {
	// check if queue is full
	if (rear == 4) {
		cout << "queue is full, cannot add customer" << endl;
		return;
	}
	if (front == -1) {
		front = 0;
	}
	rear++;
	items[rear] = value;
	cout << "customer token " << value << " added" << endl;
}

// serve next customer (dequeue)
void dequeue() {
	// check if queue is empty
	if (front == -1 || front > rear) {
		cout << "queue is empty, no customers to serve" << endl;
		return;
	}
	cout << "serving customer token: " << items[front] << endl;
	front++;

	// reset queue if all elements are served
	if (front > rear) {
		front = -1;
		rear = -1;
	}
}

// view next customer in line
void peek() {
	if (front == -1 || front > rear) {
		cout << "queue is empty, no next customer" << endl;
		return;
	}
	cout << "next customer token: " << items[front] << endl;
}

// display all customers in queue
void display() {
	if (front == -1 || front > rear) {
		cout << "queue is empty" << endl;
		return;
	}
	cout << "current queue: ";
	for (int i = front; i <= rear; i++) {
		cout << items[i] << " ";
	}
	cout << endl;
}

int main() {
	int choice;
	int tokenCounter = 1; // auto increment token numbers

	do {
		cout << endl <<  "-menu-" << endl;
		cout << "1. add customer" << endl;
		cout << "2. serve next" << endl;
		cout << "3. view next" << endl;
		cout << "4. display queue" << endl;
		cout << "5. exit" << endl;
		cout << "enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			enqueue(tokenCounter++);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;
		case 5:
			cout << "exiting program..." << endl;
			break;
		default:
			cout << "invalid choice, please try again" << endl;
		}
	} while (choice != 5);

	return 0;
}
