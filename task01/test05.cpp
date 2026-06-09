#include <iostream>
using namespace std;

int main() {
	const int size = 5;
	int array[size]{ 1, 2, 3, 4, 5 };

	for (int i = 0; i < size; i++) {
		cout << (array + i) << " - " << *(array + i) << endl;
	}
	
	return 0;
}
