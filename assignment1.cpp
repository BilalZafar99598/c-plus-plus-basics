#include <iostream>
using namespace std;
int main()
{
float basic_pay, house_rent, net_pay;

cout<<"Enter your basic pay\n";
cin>>basic_pay;

if (basic_pay < 30000)	
{
	house_rent = basic_pay*30/100;
}
else if(basic_pay >= 30000 && basic_pay<= 50000)	
{
	house_rent = basic_pay*35/100;
}
//else if (basic_pay > 50000)
else
{
	house_rent = basic_pay*40/100;
}
	net_pay = basic_pay + house_rent;
	cout<<"The net pay is: "<<net_pay;
}
