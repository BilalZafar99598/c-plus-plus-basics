#include <iostream>
using namespace std;

int main()
{
//	int a = 10;
//	// Update value of a
//	a = 20;
//	
//	// in C++ we have const variables as well we use const keyword in c++
//	// constant variable is read-only we cannot reassign or update value of constant variable
//	const float PI = 3.14;
//	// This line gives us error
////	PI = 5.14;
//	cout<<"Value of Const PI is: "<<PI;
//	cout<<"Value of A is: "<<a;


	// When we use const keyword with variable so we cannot declare but must assign value in that variable otherwise it gives us error
//	const float PI = 3.14; // Variable Declaration
////	PI = 3.14; // Value Assign
//	cout<<"Value of PI is: "<<PI;

// string name = "ABCXYZ";
// We can access each character from a string by using Index value like 0 is Index Value and index value always start from zero
// \n is a escape sequence that is use for jump into a new line
// cout<<"Character At Index 0: "<<name[0]<<"\n";
// cout<<"Character At Index 1: "<<name[1]<<"\n";
// cout<<"Character At Index 2: "<<name[2]<<"\n";
// In C++ we have multiple built-In Functions or Methods.
/*
	There are Two Types of Methds in C++ 
	1. User-Define Method.
	2. Built-In Methods or Pre-Defined Methods C++ provide all those methods
*/

// string firstName = "ABCXYZ";
 
 // if we want to check length of a string variable so we can use length() built-in method
// cout<<"Length of Name is: "<<firstName.length();
 //cout<<firstName[5];
 
// // + operator 
// string fname = "Ali";
//// string lname = "Omer";
//	// We cannot concatenate string with Numbers like integer or float
// int lname = 50;
// string fullName = fname + lname;
// cout<<fullName;

//string firstName = "ABCXYZ";
//// size() and length() methods both are same 
//cout<<firstName.size();


// How to get value from user in c++
// for this purpose  we will use cin>>

//int number; // STEP 1 Declare Variable Name
//cin>>number; // cin will get data from user 
//cout<<"Your Enter :"<<number; // Display Result


// We already did static code because we enter values manually
// Get value from user and Find Even and Odd Number
//int number;
//cout<<"Please Enter Your Number: ";
//cin>>number;
//
//if(number % 2 == 0)
//{
//	cout<<"Your Enter Even Number: "<<number;
//}
//else
//{
//	cout<<"You Enter Odd Number: "<<number;
//}
int marks;
cout<<"Please Enter Your Marks: \n";
cin>>marks;
	if(marks >= 90 && marks <=100)
	{
		cout<<"Student Pass with Grade A";
	}
	else if(marks >=80 && marks < 90)
	{
		cout<<"Student Pass with Grade B";
	}
	else if(marks >=70 && marks < 80)
	{
		cout<<"Student Pass with C Grade";
	}
	else if(marks >= 60 && marks < 70)
	{
		cout<<"Student Pass with Grade D";
	}
	else if(marks >= 50 && marks < 60)
	{
		cout<<"Student Pass with Grade E";
	}
	else{
		cout<<"Fail";
	}









}
