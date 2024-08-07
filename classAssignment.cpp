#include <iostream>
using namespace std;

int main()
{
	string str1, str2, str3;
	str1 = "AAAAA";
	str2 = "CC";
	str3 = "CC";
	
	if( (str1.length() < str2.length()) && (str1.length() < str3.length()))
	{
		cout<<"String 1 is smallest "<<str1;
	}
	else if( (str2.length() < str1.length()) && (str2.length() < str3.length()))
	{
		cout<<"String 2 is smallest "<<str2;
	}
	else if( (str3.length() < str1.length()) && (str3.length() < str2.length()))
	{
		cout<<"String 3 is smallest "<<str3;
	}
	else{
		cout<<"Some Strings having same length";
	}
	
}



//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[15] = {5,5,5,5,3,5,5,12,5,5,3,5,8,4,5};
//	int count5 = 0;
//	for(int i = 0; i < sizeof(arr)/sizeof(int); i++)
//	{
//		cout<<arr[i]<<endl;
//		if(arr[i] == 5)
//		{
//			count5 += 1;
//		}
//	}
//	cout<<"Number 5 appear "<<count5<<" times in Array";
//}














//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num = 50;
//	for(int i = 0; i <= 50; i++)
//	{
//		if(i%2 != 0)
//		{
//			// NESTED IF-Statement
//			if(i%5 == 0)
//			{
//				cout<<"SKIPPED ODD Number is: "<<i<<endl;
//				continue;
//			}
//			cout<<"ODD Number is: "<<i<<endl;
//			
//			
//		}
////		else
////		{
////			cout<<"ODD Number is: "<<i<<endl;
////		}
//	}
//}
