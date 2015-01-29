#include <iostream>
using namespace std;

int main()
{
	int limit;  

	cout << "Enter the limit of your Fibonacci sequence, or zero to stop: ";  // prep for first time through loop
	cin >> limit;		// Enter your upper bound

	while (limit != 0)
	{
		int num1 = 0, num2 = 1, num3 = 1;  // initialize for the start of the sequence
		cout << num1 << endl;			
		cout << num2 << endl;

		do {
			cout << num3 << endl;
			num1 = num2;
			num2 = num3;
			num3 = num1 + num2;
		} while (num3 <= limit);

		cout << "Enter the limit of your Fibonacci sequence, or zero to stop: ";  // loop of repeated inputs
		cin >> limit;		// Enter your upper bound

	} ;
	cout << "All done!" << endl;
	cin.get();

	return 0;
}