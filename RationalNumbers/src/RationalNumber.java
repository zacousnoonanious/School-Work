////////////////////////////////////////////////////////////////////////////
//
//	Zachary S. Noonan
// 	Assignment 5
//	March 2, 2016
//
////////////////////////////////////////////////////////////////////////////

public class RationalNumber {

	double myrationalNumber;
	
	public RationalNumber(int numerator, int denominator) 
	{
		Simplify(numerator, denominator); //calls the simplify method and passes in two integers
	}
	
	/*****************************************************************
	*
	*	Name:			Simplify
	*	Description:	This method simplifies the number
	*	Inputs:			two integers
	*	Returned value:	simplifies the number into simplest form then calls the toString method
	*	Preconditions:	must be integers, denominator cannot equal 0
	*
	*****************************************************************/

	void Simplify(int numerator, int denominator)
	{
		int simpNumerator = numerator / getGCD(numerator, denominator); // takes the numerator and divides by the GCD
		int simpDenominator = denominator / getGCD(numerator, denominator); // takes the denominator and divides by the GCD
		toString(simpNumerator, simpDenominator); // passed in the two integer values into the toString method
	}
	
	/*****************************************************************
	*
	*	Name:			getGCD
	*	Description:	This method is used to return the greatest common divisor of two numbers
	*	Inputs:			two integers
	*	Returned value:	returns itself until GCD is found
	*	Preconditions:	must be integers, denominator cannot equal 0
	*
	*****************************************************************/
	
	private int getGCD(int x, int y)
	{
		
		if (y == 0)
		{
			return x; // if y = 0, then simply return our other value
		}
		return getGCD(y, x % y); // returns itself until it finds the GCD (I already know a little about recursion)
	}
	
	/*****************************************************************
	*
	*	Name:			getValue
	*	Description:	This method returns a double version of the number
	*	Inputs:			two integers
	*	Returned value:	rational number to double.
	*	Preconditions:	must be integers, denominator cannot equal 0
	*
	*****************************************************************/
	
	public double getValue(int simpNumerator, int simpDenominator)
	{
		return (double)myrationalNumber; // returns double value into a global variable to be used if we want
	}
	
	/*****************************************************************
	*
	*	Name:			toString
	*	Description:	outputs the simplified number to the console
	*	Inputs:			two simplified integers
	*	Returned value:	"The simplified rational number is a/b."
	*	Preconditions:	must be integers, denominator cannot equal 0
	*
	*****************************************************************/
	
	public void toString(int simpNumerator, int simpDenominator)
	{
		System.out.println("The simplified rational number is " + simpNumerator + "/" + simpDenominator + "."); // outputs our simplified number to the console
	}
		
}
