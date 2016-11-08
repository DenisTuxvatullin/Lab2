// PrimeNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GenPrimeNum.h"

int main()
{
	cout << "Input upper bound: ";
	int upperBound;
	cin >> upperBound;	
	set<int> primeSet = GeneratePrimeNumSet(upperBound);
	for (auto i = primeSet.begin(); i != primeSet.end(); ++i)
	{
		cout << *i << " ";
	}
	system("pause");
	return 0;
}

