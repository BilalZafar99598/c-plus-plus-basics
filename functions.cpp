#include <iostream>
using namespace std;



// Method 
// this is parameterized functions
int sum(int a = 10, int b = 20)
{
	// dummy variables like a and b
	int result = a + b;
	cout<<"Result is: "<<result;
}

int sum(int a, int b, int c){
	int result = a * b *c;
	cout<<"Result of Multiplication is: "<<result<<"\n";
}



// we want to find Prime Number

int main()
{
	// 15 and 45 is known as arguments
	sum(15, 45);
		sum(10, 10);
//	sum(6,5,2);
	
}
