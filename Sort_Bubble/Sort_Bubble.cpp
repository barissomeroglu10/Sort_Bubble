/*
In this code, we use bubble sort method to put an array in an order.

Developer: Barış Someroğlu
Date: 22.01.2024 / 5:30 p.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, temp;

	// get size of array from user
	cout << "Please Enter Size of Array: ";
	cin >> n;

	vector<int> A(n);

	cout << endl;

	// get value for the array
	for (int i = 0; i < n; i++)
	{
		cout << "Please Enter a Value for " << i + 1 << ". Element: ";
		cin >> A[i];
	}

	cout << endl;

	// write entered array
	cout << "Entered Array is: ";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	// use bubble sort to order
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (A[j + 1] < A[j])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}

	cout << endl;

	// write sorted array
	cout << "Sorted Array is: ";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	cout << endl;

	return 0;
}