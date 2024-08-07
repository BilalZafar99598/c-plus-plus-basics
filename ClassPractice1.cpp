#include <iostream>
using namespace std;

int main()
{
    string name = "WE LOVE PAKISTAN";
    int vcount = 0;
    int ccount = 0;
    for (int i = 0; i < name.size(); i++) // Changed to name.size() - 1
    {
        if ((name[i] == 'A') || (name[i] == 'E') || (name[i] == 'O') || (name[i] == 'I') || (name[i] == 'U')) // Compare with name[i]
        {
//            cout << "\nThis is vowel";
           	 
            vcount = vcount + 1;
//            cout<<name[i];
        }
        else if (name[i] != ' ') // Only count consonants, not spaces
        {
//            cout << "\nThis is Consonant";
            ccount = ccount + 1;
            cout<<name[i];
        }
    }
//    cout << "\nTotal vowels: " << vcount << "\n";
    cout << "\nTotal consonants: " << ccount << "\n";
    return 0;
}


/*
Variables.
Variable naming rules
Syntax
DataTypes.
header files.
main method
keywords.
if-else statements
cin, cout
getch()
getch()
for loop
continue
break
operator
logical
arthmetic operator
comparison
funtions 


There are 2 types of function like Builtin and user-define
builtin are provided by language we cannot change those functions
but user-define it depends on your own logic and what even you want you can perform

Syntax:
return-type function_name()
{
	// Function Body
}

C++ is compiler  based programming so compiler always use main() method.


























*/


