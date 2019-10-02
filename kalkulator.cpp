#include <iostream>
using namespace std;
int main()
{
char op;
float num1, num2;
long x;
cout << "+ Dodawanie";
cout << endl <<  "- Odejmowanie" << endl;
cout << "* Mnozenie" << endl;
cout << "/ Dzielenie" << endl;
cout << "Enter operator ";
cin >> op;
cin.clear();
cin.ignore(1000, '\n' );

cout << "Enter two numbers: ";
cin >> num1 >> num2;
cin.clear();
cin.ignore(1000, '\n');
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
