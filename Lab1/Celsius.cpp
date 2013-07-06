// ----------------------------------------------------------------------------
//
// -------------------------- Temperature Conversion --------------------------
//
// ----------------------------------------------------------------------------
//
// Temperature Conversion
//
// This test program asks for the user's name,
// and a temperature in degrees Fahrenheit.
// The output is the temperature in degrees Celsius.
//
// ----------------------------------------------------------------------------

	#include <iostream>
	#include <string>
	using namespace std ;   
   
// ----------------------------------------------------------------------------
//
// ------------------------------- Main Program -------------------------------
//
// ----------------------------------------------------------------------------

	int main(void)
	{
	// ---------------------------------------------------------------------
	// Constants used in temperature conversion
	// ---------------------------------------------------------------------
		const double FAHRENHEIT_BASE = 32.0;
		const double F2C_SCALE = 1.8;
		
	// ---------------------------------------------------------------------
	// Variables:
	//   fahrenheit is the temperature in degrees Fahrenheit.
	//   celsius    is the temperature in degrees Celsius.
	//   name       is the user's firstName
	// ---------------------------------------------------------------------
		double fahrenheit, celsius;
		string firstName ;
		
		cout << "Hello, what is your first name? " ;
		cin >> firstName ;
		
		cout << "\nHello, " << firstName
		     << ", please enter a temperature in Fahrenheit): " ;	
		cin >> fahrenheit;
		
		celsius = (fahrenheit - FAHRENHEIT_BASE)/ F2C_SCALE;
		
		cout << "The corresponding temperature in celsius is: "
		     << celsius << " ." << endl << endl ;
		     
		return 0 ;
	}
