#include <iostream>
using namespace std;


int sum(int a, int b){
	int add = a+b;
	cout<<"Sum of Two Number is: "<<add<<"\n";
}

int subtract(int a, int b){
	int sub = a-b;
	cout<<"Subtraction of Two Number is: "<<sub<<"\n";
}


int calculator()
{
int a;
int b;
cout<<"enter your number \n";
cin>>a;
cout<<"enter your number \n";
cin>>b;

//int sum = a + b;
sum(a,b);
subtract(a,b);
//cout<<"The sum of these two numbers are: "<<sum;
//int multiple = a * b;
//cout<<"The multiplication of these two numbers are: "<<multiple;
// int divide = a/b;
//cout<<"The divison of these two numbers are: "<<divide;


if(a %2 == 0)
{
cout<<"the modulus of these numbers are: ";
}
}
int main()
{
 calculator();
}
