/********************************************/
/* Procedure to factor any integer greater  */
/* than 1 into its prime factors.           */
/* Part of the 100 Projects on GitHub by    */			
/* Karan/projects						    */
/* By Cathy Pherigo, written 1/30/15        */
/********************************************/

#include <iostream>
using namespace std;

int main()
{
	int number_to_factor;

	do										// Main do loop to take input from console
	{
		cout << "Enter the number to factor, or zero to quit: ";
		cin >> number_to_factor;

		if (number_to_factor >= 2)			// Test for valid input
		{

			int first_factor = 1;				// Set up first pair of factors
			int second_factor = number_to_factor;
			int num_factors = 0;				// Setup factor counter
			int scan_to = number_to_factor/2;   //Do not waste time scanning past n/2.

			cout << "The prime factors are: ";
			for (int i = 2; i <= scan_to; i++)
			{
				while (second_factor % i == 0)	// Does i go evenly into second_factor?
				{
					first_factor = i;			// Reset the factor pair
					second_factor = second_factor / i;
					num_factors++ ;
					cout << first_factor << ", ";  // Print out the new first 
				}
			}

			if (num_factors == 0)
			{
				cout << "none." << endl;
				cout << "The number " << number_to_factor << " is prime." << endl;
			}
			else
			{
				cout << "." << endl;
				cout << "The number of factors is: " << num_factors << endl;
			}
		}
		else
			number_to_factor = 0;
	}
		while (number_to_factor != 0);

	return 0;
}