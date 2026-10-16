//Shivam Kumar 555585 BSCS-15-D

#include <iostream>
using namespace std;

int items[5];
int front = -1;
int rear = -1;

// insert value into queue
void enqueue(int value) {
	// check if queue is full
	if (rear == 4) {
		cout << "queue is full, cannot insert " << value << endl;
		return;
	}
	// if queue is empty, set front to 0
	if (front == -1) {
		front = 0;
	}
	rear++;
	items[rear] = value;
	cout << "inserted: " << value << endl;
}

// display queue from front to rear
void display() {
	// check if queue is empty
	if (front == -1 || front > rear) {
		cout << "queue is empty" << endl;
		return;
	}

	cout << "queue elements: ";
	for (int i = front; i <= rear; i++) {
		cout << items[i] << " ";
	}
	cout << endl;
}

int main() {
	enqueue(10);
	enqueue(20);
	enqueue(30);

	display();
	enqueue(40);
	enqueue(50);
	enqueue(60);

	return 0;
}
