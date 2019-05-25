#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int sum(int,int);
int sub(int,int);
int mul(int,int);
double div(int,int);
double mod(int, int);
int result;
	int sum(int a,int b)
 {
 	result = a + b;
 	return(result);
}

int sub(int a,int b)
 { 
 	result = a - b;
 	return(result);
 }

int mul(int a,int b)
 {
 	result = a * b;
	return(result);
 }

double div(int a,int b)
 {
 	result = a / b;
	return(result);
 }
double mod(int a, int b)
 {
 	result = a % b;
 	return(result);
 }
int main()
{
	double n, a, b, s, d, p, q, m, j;
	char y;
	bool abort = false;
	do
	{
cout << "MENU: \n";
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;		
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cout << "5. Modulus" << endl;	
for (int i = 0; i < n; i++)
{
 cout << "Enter your choice: "; cin >> n;
 cout<<"Enter Two Numbers: "; cin >> a >> b;
 	s = sum(a,b);
 	d = sub(a,b);
 	p = mul(a,b);
 	q = div(a,b);
 	m = mod(a,b);
if (n == 1)
 	cout << "\nSum = " << s;
else if (n == 2) 
 	cout << "\nSubtraction = " << d << "\n\n";
else if (n == 3)
	 cout << "\nMultiplication = " << p << "\n\n";
else if (n == 4)
 	cout << "\n Division = " << q << "\n\n";
else if (n == 5)
	cout << "\nModulus = " << m << "\n\n";
else
 	cout << "Choose a number!!" << endl;
		}
	
	cout << "\nEnter y to continue.";
	cout << "\nContinue? ";
	cin >> y;
} while (y == 'y' || y == 'Y');
(!abort);
	return 0;
	
}
