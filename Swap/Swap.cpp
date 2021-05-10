// Swap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void Swap(int* x, int* y);

int main()
{
	/*Problem: Write a function called swap that takes in two integers by pointerand swaps their values.*/
	int x;
	int y;

	cout << "Give me two numbers for the value of x and y and I wil swap the values" << endl;
	cin >> x;
	cin >> y;

	Swap(&x, &y);

	cout << "The value of x is: " << x << endl;
	cout << "The value of y is: " << y << endl;
}

void Swap(int* x, int* y)
{
	int temp = *x;

	*x = *y;

	*y = temp;

}