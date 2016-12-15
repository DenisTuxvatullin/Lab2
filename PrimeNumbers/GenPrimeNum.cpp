#include "stdafx.h"
#include "GenPrimeNum.h"

set<int> GeneratePrimeNumSet(int upBound)
{
	set<int> primeSet;
	if (upBound <= maxValue && upBound > 1)
	{	
		vector <bool> primeVector(upBound + 1);
		for (int i = 2; i <= upBound; ++i)
		{
			if (primeVector[i] == false)
			{
				primeSet.insert(i);		
				if (i * 1ll * i <= upBound) 
				{
					
					for (int j = i * i; j <= upBound; j += i)
					{
						if (i <= upBound)					
							primeVector[j] = true;
					}
					
				}
				
			}
			
		}
	}
	return primeSet;
}
