#include <iostream>
using namespace std;

int findEVEN(int number){
	if(number%2 ==0){
		cout<<number<<" Number is EVEN\n";
	}
}

int findODD(int number){
	if(number%2 !=0){
		cout<<number<<" Number is ODD\n";
	}
}

int main()
{
//	How to interate over Array
	int arr[11] = {10,20,30,40,50,60,70,80,90,100,111};
//	int count = sizeof(arr)/sizeof(int);
	for(int i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
//		cout<<"Value at Index: "<<i<<" is "<<arr[i]<<"\n";
		if(arr[i]%2 == 0)
		{
			findEVEN(arr[i]);
//			cout<<"if"<<endl;
//			cout<<arr[i]<<" is EVEN Number\n";
		}
		else{
			findODD(arr[i]);
//			cout<<"else"<<endl;
//			cout<<arr[i]<<" is ODD Number\n";
		}
	}
}
