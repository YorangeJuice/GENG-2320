#include <iostream>
using namespace std;

int main()
{
	cout << "Input 3 different integers separated by spaces: ";
	int usernumber1{ 0 };
	int usernumber2{ 0 };
	int usernumber3{ 0 };
	cin >> usernumber1 >> usernumber2 >> usernumber3;
	
	int sum{ usernumber1 + usernumber2 + usernumber3 };

	cout << "Sum is " << sum;
	cout << "\nAverage is " << (sum)/3;
	cout << "\nProduct is " << usernumber1 * usernumber2 * usernumber3;

	//smaller
	if (usernumber1 < usernumber2) {
		if (usernumber1 < usernumber3) {
			cout << "\nSmallest is " << usernumber1;
		}
	}

	if (usernumber2 < usernumber1) {
		if (usernumber2 < usernumber3) {
			cout << "\nSmallest is " << usernumber2;
		}
	}

	if (usernumber3 < usernumber1) {
		if (usernumber3 < usernumber2) {
			cout << "\nSmallest is " << usernumber3;
		}
	}

	//bigger
	if (usernumber1 > usernumber2) {
		if (usernumber1 > usernumber3) {
			cout << "\nLargest is " << usernumber1;
		}
	}

	if (usernumber2 > usernumber1) {
		if (usernumber2 > usernumber3) {
			cout << "\nLargest is " << usernumber2;
		}
	}

	if (usernumber3 > usernumber1) {
		if (usernumber3 > usernumber2) {
			cout << "\nLargest is " << usernumber3;
		}
	}

	cout << '\n';
	return 0;
}