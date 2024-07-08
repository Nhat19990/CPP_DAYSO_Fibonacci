// CPP_DAYSO_Fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

void Fibonacci(int n)
{
	int nRem, x = 0, y = 1;
	do
	{
		cout << x << " ";
		nRem = x;
		x = y;
		y = nRem + x;
	} while (x <= n);

}


int main()
{
	int n;

	do
	{
		cout << "Nhap mot so nguyen duong n de xuat ra day Fibonacci den n: ";
		cin >> n;
		if (n <= 0)
			cout << "Vui long nhap lai! (n>0)" << endl;
	} while (n <= 0);

	Fibonacci(n);

	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
