#include <iostream>
using namespace std;
int main()
{
char op;
float num1, num2;
long x;

// Displaying available operations
cout << "+ Dodawanie";
cout << endl <<  "- Odejmowanie" << endl;
cout << "* Mnozenie" << endl;
cout << "/ Dzielenie" << endl;

// Prompting the user for input
cout << "Enter operator ";
cin >> op;

// Clearing any remaining characters from the input buffer
cin.clear();
cin.ignore(1000, '\n' );

// Prompting the user for numbers
cout << "Enter two numbers: ";
cin >> num1 >> num2;

cin.clear();
cin.ignore(1000, '\n');

// Performing the calculation based on the operator
cout << endl << "Those numbers " <<  num1 << " "  << num2 << " give ";

switch(op)
{
case '+':
	cout << num1+num2;
 	break;
case '-':
	cout << num1-num2;
	break;
case '*':
	cout << num1*num2;
	break;
case '/': 
	cout << num1/num2;
	break;
default:
	cout << "Wrong operator";
	break;
}
return 0;
}
