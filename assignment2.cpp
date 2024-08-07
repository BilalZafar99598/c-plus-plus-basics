#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
	int sum;
//	x and y 
//    i represent rows and j represent columns 

	int arr[3][4]= {{4,18,-16,11}, {-5,10,-2,12}, {10,-3,17,18}};	
	for (int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++) {
			cout<<"Number at arr[i][j] is: "<<arr[i][j]<<endl;
			if (arr[i][j] > 0)
				{
					sum = sum+arr[i][j];					
				}

		}
	}
	cout<<"The sum of all the positive numbers are: "<<sum;
}

