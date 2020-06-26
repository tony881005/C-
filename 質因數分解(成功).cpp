#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
	
	while(1)
	{
	int P = 0, R = 0, COUNT = 0;
	string str;
	cin >> P;
	for(int i = 2; ;)
	{
		R = P % i;
//		cout << P << endl;
		if(R == 0)
		{
			COUNT += 1;
		    P = P / i;
			continue;
		}
		else
		{
			if(COUNT == 0)
			{
				i += 1;	
			}
			else if(COUNT == 1)
			{
				str += to_string(i) + "*";
				COUNT = 0;
				i += 1;
				if(P == 1)
				{
					break;
				}
			}
			else 
			{
				str += to_string(i) + "^" + to_string(COUNT) + "*";
				COUNT = 0;
				i += 1;
				if(P == 1)
				{
					break;
				}
			}

		}
//	cout << str << endl;
	}
	str.erase(str.end() - 1);
	cout << str << endl;
	
	}
	
	
	return 0;
}
