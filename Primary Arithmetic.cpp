#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	while(true)
	{
		int A, B, COUN = 0, Ap = 0, Bp = 0, E = 0, P;
		cin >> A >> B;
		if(A == 0 && B == 0)
		{
			break;
		}
		for(int i = 1; i <= 9; i++)
		{
			P = pow(10, i);
			Ap = A%P / (P/10);
			Bp = B%P / (P/10);
//			cout << Ap << " " << Bp << endl;
			if(Ap + Bp + E >= 10)
			{
				COUN += 1;
				E = 1;
			}
			else
			{
				E = 0;
			}
			
			
		}
		if(COUN == 0)
		{
			cout << "No carry operation." << endl;
		}
		else if(COUN == 1)
		{
			cout << "1 carry operation." << endl;
		}
		else
		{
			cout << COUN <<" carry operations." << endl;
		}
		
		
	}
}
