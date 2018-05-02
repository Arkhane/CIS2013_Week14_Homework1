#include <iostream>
#include <string>
using namespace std;

// g++ main.cpp ToDo.cpp
class ToDo {
private:

	string * list;
	int length = 0;
	int next = 0;

public:

	// Default Constructor
	ToDo();

	// Create list of length len
	ToDo(int len);

	// Destroy out list
	~ToDo();

	// Add an item to list
	void add(string item);

	// Finish the last thing in list
	void done();

	// Print list
	void print();
};