#include <iostream>

using namespace std;
int main()
{
	int S, T, F;
	cin >> S >> T >> F;
	if(T-S == F-T)                                     //µ¥®t 
	{
		int d = T - S, A = S - d, B = F + d;	
		cout << A << " " << B;
		
	}
	else if(T/S == F/T)
	{
		int r = T/S, A = S/r, B = F * r;
		cout << A << " " << B;
		
		
	}
	
	
} 
