#include <iostream>
using namespace std;

int main() {
	int* ptr = NULL;
	int number = 10;

	ptr = &number;

	*ptr *= 2;

	cout << &number << " - " << number << "\n";
	cout << ptr << " - " << *ptr << "\n";
	cout << main << " - " << *main << "\n";

	return 0;
}
