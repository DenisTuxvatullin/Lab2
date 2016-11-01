#include "stdafx.h"
#include "GenPrimeNum.h"
set<int> GeneratePrimeNumSet(int upBound)
{
	set<int> primeSet;
	vector <bool> primeVector(upBound + 1);
	for (int i = 2;  i < upBound; i++)
	{
		if (primeVector[i] == false)
		{
			primeSet.insert(i);
			if (i <= upBound / i)
			{
				for (int j = i * i; j <= upBound; j += i)
				{
					primeVector[j] = true;
				}
			}
		}
	}
	return primeSet;
}
