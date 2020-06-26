#include <iostream>

using namespace std;
int main()
{
	int T;
	cin >> T;
	while(T > 0)
	{
		int NUM, CH = 0;
		cin >> NUM;
		int S[NUM];
		for(int i = 0; i <= NUM - 1; i++)
		{
			cin >> S[i];
			
			
		}
		for(int i = 0 ; i <= NUM ; i++)
	    {
	    	for(int j = 0 ; j <= NUM-2 ; j++)
		{
			if(S[j] > S[j+1])
			{
			    swap(S[j], S[j+1]);
				
			}	 
		}
		
		
		
	    }
	    for(int i = 0; i <= NUM - 2; i++)
	    {
//	    	cout << "@" << endl; 
	    	if(S[i+1] - S[i] > CH)
	    	{
//	    		cout << "@" << endl; 
	    		CH = S[i+1] - S[i];
	    		
	    		
			}
	    	
	    	
		}
		
		cout << CH << endl;
		T -= 1;
		
	}
	
	
} 
