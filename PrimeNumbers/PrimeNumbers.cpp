#include "stdafx.h"
#include "GenPrimeNum.h"
#include <stdlib.h>  

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		cout << "Incorrect number of param" ;
		return 0;
	}
	char* digit = argv[1];
	int upperBound = atoi(digit);
	set<int> primeSet = GeneratePrimeNumSet(upperBound);
	for (auto i = primeSet.begin(); i != primeSet.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}