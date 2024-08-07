#include <iostream>
using namespace std;

int main()
{
	
	//CRUD Operation
	/*
	CRUD 
	1. Create 
	2. Read.
	3. Update.
	4. Delete.
	
	Let say we want to add new Book Data in our store 
	1. Create Data regarding Book like Bookname, BookID, Book-Author, Total_Pages,
	2. If we want to display our data then we will Read Our data from Store.
	3. If we want to update any specific data then we will perform Update Operation.
	4. If we want to delete One Book Data then we will perform Delete Operation.
	
	*/
//	arr[0] = "Data Changed";
// This is 1 Dimension Array
//	string arr[5]= {
//		"AAB",
//		"BB",
//		"CCC",
//		"DDDD",
//		"EEEEE"
//	};
//	
//	for(int i = 0; i< sizeof(arr)/sizeof(string); i++)
//	{
//		if(((arr[i][0] == 'A') && arr[i][arr[i].length()-1] == 'A') ||  (arr[i][0] == 'E') || (arr[i][0] == 'I') || (arr[i][0] == 'O') ||(arr[i][0] == 'U'))
//		{
//			cout<<arr[i]<<" start and end with Vowel"<<endl;
//		}
//	}
// This is 2 Dimensional 2D Array
	string arr[3][5] = {
		{"Name", "Age", "Qualification", "CGPA", "Desination"},
		{"Omer", "25", "BS Computer Science", "3.5 CGPA", "Software Developer"},
		{"Haris", "30", "BS Computer Science", "3.4 CGPA", "Web Developer"},
	};
//	cout<<arr[2][0];
	// NESTED FOR LOOP 
	// Loop within a Loop
	for(int i = 0; i < sizeof(arr)/sizeof(string); i++)
	{
		cout<<arr[i][1]<<endl;

//		cout<<arr[i][0]<<endl;
//	if(arr[i][1] == "Age")
//	{
//		cout<<arr[i][1]<<endl;
//		cout<<arr[i][2]<<endl;
//		for(int j = 0; j < sizeof(arr[j][1])/sizeof(string); j++)
//		{
//			cout<<arr[j][];
//		}
	}
	//}
}



















