#include <iostream>

using namespace std;
int main()
{
	long long A, B;
	cin >> A >> B;
	if(A - B >= 0)
	{
		cout << A-B;
	}
	else
	{
		cout << B-A;
	}
	
} 
