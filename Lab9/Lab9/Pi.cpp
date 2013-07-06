// ----------------------------------------------------------------------------
//
// ------------------------------ PI Calculation ------------------------------
//
// ----------------------------------------------------------------------------
//
// This is a demo program to be used as a lab assignment for 
// CS 171 (Computer Programming I).
// The program computes an approximation for PI based on the identity
//
//     PI             1       1       1       1
//    ----  =  1  -  ---  +  ---  -  ---  +  ---  -  ...
//     4              3       5       7       9
// 
// The program uses a loop to compute successive terms and partial sums.  
// The loop terminates if the difference between partial sums becomes 
//   sufficiently small or a maximum number of iterations is exceeded.
//   
// P Zoski, Feb. 2002
// Modified, JL Popyack, Feb. 2002 - reformatted header and output
//
// ----------------------------------------------------------------------------

	#include<iostream>
	#include<iomanip>
	#include<cmath>
	#include<ciso646>
	using namespace std;

// ----------------------------------------------------------------------------
//
// ------------------------------- Main Program -------------------------------
//
// ----------------------------------------------------------------------------

	int main(void)
	{
		const double EPSILON = .0000001;
		const long int MAX_ITERATIONS = 1000000000; // not enough - man this thing is slow
	 
		double oldPartialSum = 0.0;
		double newPartialSum = 0.0;
		int count = 0; // tracks how many terms we've added
		
		do {
			oldPartialSum = newPartialSum; // shift each time through

			double nextTerm = 1.0 / (2.0 * count + 1.0);

			bool even = (count % 2 == 0);

			if (even) // add zeroth, second, fourth, sixth, etc. terms
				newPartialSum = oldPartialSum + nextTerm;
			else // subtract first, third, fifth, etc. terms
				newPartialSum = oldPartialSum - nextTerm;

			count++; // added another term

			//cout << "Current guess for PI ("
				//<< count << " iterations) = "
				//<< setprecision(10)
				//<< 4 * newPartialSum << endl;

		} while ( ( fabs(newPartialSum - oldPartialSum) > EPSILON ) // are we close yet?
			and ( MAX_ITERATIONS > count )); // give up if takes too long

		cout << endl << "After " << count << " iterations, I think Pi = "
		     << 4 * newPartialSum << endl << endl;

		return 0;
	}