#include <iostream>
using namespace std;

int main()
{
	string data[7] = {"AB", "AA", "AAAB", "BBBBZ", "Muhammad", "Ahmed", "Abdullah"};
//	int count = sizeof(data)/sizeof(int);
//	cout<<count;
//	cout<<"Value at Index 0 is: "<<data[0]<<endl;
//	cout<<"Value at Index 1 is: "<<data[1]<<endl;
//	cout<<"Value at Index 2 is: "<<data[2]<<endl;
//	cout<<"Value at Index 3 is: "<<data[3]<<endl;
//	cout<<"Value at Index 4 is: "<<data[4]<<endl;
	
//	cout<<data[0].length();

//	int count = sizeof(data)/sizeof(string)-1;
//	cout<<count;
	int counter = 0;
	for(int i = 0; i < sizeof(data)/sizeof(string); i++)
	{
//		cout<<data[i][sizeof(data)/sizeof(string)-1]<<endl;
//		cout<<"Name of Student at Index: "<<i<<" is: "<<data[i]<<"\n";
//		cout<<data[i][data[i].length()-1]<<endl;
//		if((data[i][0] == 'A') && (data[i][data[i].length()-1] == 'Z'))
		if(data[i].length() >= 5)
		{
			counter +=1;
			cout<<data1[i]<<endl;
			
//			continue;
		}
//		cout<<"Name without Char A is: "<<data[i]<<endl;
	}
	cout<<"Total Items length greater than 5 are: "<<counter;
}











