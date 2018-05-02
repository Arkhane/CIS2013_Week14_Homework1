#include "ToDo.h"
#include <fstream>

using namespace std;

ToDo::ToDo() {
	ofstream myfile;
	myfile.open("file.txt");
	ToDo(5);

}

ToDo::ToDo(int len) {
	length = len;
	list = new string[length];
}

ToDo::~ToDo() {

	delete[] list;
}

// Add an item to list
void ToDo::add(string item) {
	if (next < length) {
		list[next] = item;
		next++;
	}
}

// Finish the last thing in list
void ToDo::done() {
	next--;
	list[next] = "";
}

// Print list
void ToDo::print() {
	for (int i = 0; i<next; i++) {
		cout << " " << i << " " << list[i] << endl;
	}
}