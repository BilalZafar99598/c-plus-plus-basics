#include <iostream>
using namespace std;

int main()
{
	string country = "WE LOVE PAKISTAN AAAA";
	int countA = 0;
	for(int i = 0; i<=country.size();i++)
	{
		if(country[i] == 'a')
		{
			countA = countA + 1;
		}
		cout<<"Character at index "<<i<<"\t"<<country[i]<<"\n";	
	}	
	cout<<"Total CountA is: "<<countA;
}

