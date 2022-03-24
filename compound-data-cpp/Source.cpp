#include <iostream>
#include <array>
#include <string>
using namespace std;


// namespaces must be written above main() --> Compiler problems! can probably avoid with using statement
namespace arrMethods {

	void arrCounter(int arg[], int length) {
		
		for (int n = 0; n < length; ++n) {
			cout << arg[n] << ' ';
		}
	}

	void printArray(array<int,4> myArr) {
		for (int element : myArr) { // This is like a foreach loop; similar syntax to java
			cout << "Array contains: " << element << endl;
		}
	}
}

namespace characterMethods {
	// arrays of characters are ended with special \0 character

	char myFirstName[] = { 'M', 'a', 't', 't', 'h', 'e', 'w', '\0' }; // Length includes the null character at end
	char myLastName[] = "Kirkendall"; // null character included behind the scenes

	string fullName = myLastName; // Can convert arrays, but not concat
	
	void printMessage() {
		char message[80]; // Fixed size must be specified, unlike strings

		cout << "What word would you like to say?"; 
		cin >> message; // Remember! character arrays terminate with white space
		cout << "Okay, I will say: " << message << endl;

	}

}

namespace pointerOps {

	 void get_int_address(int num) {
		int* address = &num;
		
		cout << "Memory location is: " << address << endl;
		cout << "Variable content is: " << *address << endl; // *'deference' sign points to variable value held at pointer
	 }

	 void array_pointer_demo(int ar[]) {

		 cout << ar << endl;

		 int* myPointer = ar; // Can implicitly convert arrays into pointers

		 cout << myPointer << endl;

		 // Arrays and pointers can do the same functions
	 }

	 void pointer_arithmatic(int num) {

		 int* pointer = &num;

		 cout << "Initial location: " << pointer << endl;
		 cout << "New location: " << ++pointer << endl;
	 }
}

int main() {

	array<int, 4> sampleArray = { 2, 4, 6, 8 };

	arrMethods::printArray(sampleArray); // Calling upon namespace syntax, like a simple . in C#

	//characterMethods::printMessage();

	int testNum = 500;
	int testAr[5] = { 10, 20, 30, 40, 50 };

	pointerOps::get_int_address(testNum);
	pointerOps::array_pointer_demo(testAr);
	pointerOps::pointer_arithmatic(testNum);


	return 0;
}
