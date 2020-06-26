#include <iostream>

using namespace std;
int main()
{
	int z;
	cin >> z;
	while(z >= 1)
	{
		int r, s[500] = {0};
		cin >> r;
		for(int i = 0; i <= r-1; i++)
		{
			cin >> s[i];
			
			
		}
		for(int i = 0; i <= r-2; i++)
		{
			
			for(int k = 1; i+k <= r - 1; k++)
			{
				
				if(s[i+k] < s[i])
				{
					swap(s[i+k], s[i]);
				}
				
				
			}
			
			
		}
//		for(int i = 0; i <= r-1; i++)
//		{
//			cout << s[i] << endl;
//		}
		int Me = 0, sum = 0;
		if(r % 2 == 0)
		{
			Me = (s[r/2 - 1] + s[r/2])/2;	
		}
		else
		{
			Me = s[r/2];
		}
//		cout << Me;
		for(int i = 0; i <= r-1; i++)
		{
			if(Me - s[i] >= 0)
			{
				sum += Me - s[i];
			}
			else
			{
				sum -= Me - s[i]; 
			}
			
			
		}
		z -= 1;
		cout << sum << endl; 
		
		
	}
	
	
} 
