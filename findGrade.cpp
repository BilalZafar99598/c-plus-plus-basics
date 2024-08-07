#include <iostream>
using namespace std;

int main(){
	int marks = 30;
	if(marks >= 90 && marks <=100)
	{
		cout<<"Student Pass with Grade A";
	}
	else if(marks >=80 && marks < 90)
	{
		cout<<"Student Pass with Grade B";
	}
	else if(marks >=70 && marks < 80)
	{
		cout<<"Student Pass with C Grade";
	}
	else if(marks >= 60 && marks < 70)
	{
		cout<<"Student Pass with Grade D";
	}
	else if(marks >= 50 && marks < 60)
	{
		cout<<"Student Pass with Grade E";
	}
	else{
		cout<<"Fail";
	}
	return 0;
}
