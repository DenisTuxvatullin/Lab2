// PrimeNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GenPrimeNum.h"
#include <boost/test/unit_test.hpp>


int main()
{
	cout << "Input upper bound: ";
	int upperBound;
	cin >> upperBound;
	if (upperBound > maxValue || upperBound < 1)
	{
		cout << "Incorrect input \n";
		system("pause");
		return 1;
	}
	set<int> primeSet = GeneratePrimeNumSet(upperBound);
	for (auto i = primeSet.begin(); i != primeSet.end(); ++i)
	{
		cout << *i << " ";
	}
	system("pause");
	return 0;
}
