#include <iostream>
using namespace std;

int main()
{

	// This is Multi-Line Comment
	/*
	In C++ We Have 2 types of comments 
	1. Single Line COmment 
		We use single line comment with double forward slash //
	2. Multi-Line Comment
	*/
	
//	This is single line comment 
	// We want to add Two numbers and store data in new variable 
//	int result = num1 + num2;
	
//	Now We want to display result output on screen
//	cout<<result;
//	If we want to calculate multiplication so we will declare new user-define variable
//	We want to apply subtraction on Two Values
//	If we want to apply division on Two Numbers then use / operator for this purpose
// Modulus Operator is use to find remainder  and % sign is use for Modulus
	int num1 = 15;
	int num2 = 40;
	int num3 = 50;
	
	int sum = num1 + num2 + num3;

	int multiply = num1 * num2;

	int subtract = num1 - num2;

	int divide = num1 / num2;
	
	int remainder = num1 % num2;
	
	cout<<"Sum of Two Numbers are:"<<sum<<endl;
	cout<<"Multiplication of Two numbers are:"<<multiply<<endl;
	cout<<"Subtraction of Two numbers is:"<<subtract<<endl;
	cout<<"Division of Two numbers is "<<divide<<endl;
	cout<<"Modulus Result is:"<<remainder<<endl;
	
	
	
	/*
		If we want to execute our code 
		1st we need to save that file with .cpp extension
		2nd step is to compile the code if there is no error or warning then
		3rd step is to Run the Code
	*/
	
//	Comparison Operators 
/*
	Greater Than >
	Greater Than Equal to >=
	Less Than <
	Less than Equal to <=
	Equal To ==
	Not Equal To !=
	
	
	IMPORTANT Point is Comparison Operators gives us result like True ad False.
	
*/
	
}
