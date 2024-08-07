#include <iostream>
using namespace std;



// Local Variable and Global Variable.

// Function Prototype 
//void displayOutput();
//{
//	cout<<"Welcome to User-Define Function";
//};

// This is Non Paramaterized function
void displayOutput() // Function Header - Function Declaration
// Function Definition
{
	cout<<"Welcome to User-Define Function";
}

void function1()
{
	cout<<"Welcome to Function One \n";
}

void function2()
{
	cout<<"Welcome to Function Two \n";
}

void function3()
{
	cout<<"Welcome to Function Three \n";
}

//int sum1()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = num1 + num2;
//	cout<<"Sum is: "<<sum;
//	return sum;
//}



int main()
{
	int sum1()
	{
	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;
	cout<<"Sum is: "<<sum;
	return sum;
	}
	sum1();
//	cout<<"Main Method";
	// We need to call method for execution
//	displayOutput();
//	function2();
//	function3();
//	function1();

}

