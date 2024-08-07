#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	//There are 3 ways to get data from user 
	/*
	1. cin>>
	
	2. getch() single charac 
	3. getche() single  cbaracter 
	if we want to use getch and getche so we must include header in that is <conio.h>
	*/
//	char ch;
//	cout<<"Enter your Character\n";
////	ch = getche();
//	ch = getche();
//	cout<<"Your Enter this character: "<<ch;
/*
	For Iteration we use Loops in Programming like for, while, do-while

	Syntax:
		for-keyword(datatype variable_name = initial_value ; condition
	
*/

	for(int i = 0; i <= 10; i++)
	{
		cout<<"Output for Iteration "<<i<<" is "<<i<<"\n";
	}

}
