#include <iostream>
#include <array>
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

int main() {

	array<int, 4> sampleArray = { 2, 4, 6, 8 };

	arrMethods::printArray(sampleArray);

	return 0;
}
