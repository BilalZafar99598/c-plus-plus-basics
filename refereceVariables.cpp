#include <iostream>
using namespace std;

int main()
{
	string food = "Pizza";
	string* pointer1 = &food;
//	Change or Update value of pointer1
// reassign a value to a pointer
	*pointer1 = "Burger";
	cout<<*pointer1;
}
