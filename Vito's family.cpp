#include <iostream>

using namespace std;
int main()
{
	int z;
	cin >> z;
	while(z >= 1)
	{
		int r, s[500];
		cin >> r ;
		for(int i = 0; i <= r-1; i++)
		{
			cin >> s[i];
			
			
		}
		
		int av = 0, sum, minsum = 2147483647;
		for(int k = 0; k <= 3000; k++)
		{
			sum = 0;
			for(int i = 0; i <= r-1; i++)                     //���PK��Ҧ��I���Z�� 
			{
				av = k - s[i];
				if(av >= 0)
				{
					sum += av;
				}
				else
				{
					sum -= av;
				}
				
				
			}
			if(sum < minsum)                                //���`�M�̵u 
			{
				minsum = sum;
				
				
			}
			
			
		}
		cout << minsum << endl;
		z -= 1;
	}
	
	
}
