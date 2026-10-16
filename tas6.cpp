//Shivam Kumar 555585 BSCS-15-D

#include <iostream>
using namespace std;

int items[5];
int front = -1;
int rear = -1;

void enqueue(int value) {
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

void dequeue() {
	if (front == -1 || front > rear) {
		cout << "queue is empty, no customers to serve" << endl;
		return;
	}
	cout << "serving customer token: " << items[front] << endl;
	front++;

	// reset queue only when all items are gone so front/rear can restart
	if (front > rear) {
		front = -1;
		rear = -1;
		cout << "queue is now empty, reset to start fresh" << endl;
	}
}

void peek() {
	if (front == -1 || front > rear) {
		cout << "queue is empty, no next customer" << endl;
		return;
	}
	cout << "next customer token: " << items[front] << endl;
}

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
	int tokenCounter = 1;

	do {
		cout << endl <<  "- menu -" << endl;
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
