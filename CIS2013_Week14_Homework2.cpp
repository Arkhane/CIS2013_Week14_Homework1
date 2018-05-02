#include <iostream>
#include <string>
#include "ToDo.h"

using namespace std;

int main() {
	char next = 'y';
	int len = 0;
	string action;

	cout << "How long to you want your list: ";
	cin >> len;

	ToDo list(len);

	// Array of ToDo objects
	// Make sure you have a () constructor
	ToDo manylists[10];

	// manylists[2].print();
	// manylists[1].print();

	while (next != 'x') {

		cout << "Add to list (a)" << endl;
		cout << "Done list item (d)" << endl;
		cout << "Print list (p)" << endl;
		cout << "Exit list app (x)" << endl;
		cout << "What do you want to do: ";
		cin >> next;

		switch (next) {
		case 'a':
			cout << "Name a todo item: ";
			cin >> action;
			list.add(action);
			break;
		case 'd':
			list.done();
			break;
		case 'p':
			list.print();
			break;
		case 'x':
			// All done with todo list
			break;
		}
	}
}