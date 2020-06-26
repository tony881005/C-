#include <iostream>

using namespace std;
int main()
{
	int n;
	while(cin >> n)
	{
	    int Ab = 0, COUN = 0, Rec[n-1], ary[n];
	    for(int i = 0; i <= n-1; i++)
	    {
	    	cin >> ary[i];
	    	
	    	
		}
		for(int i = 0; i <= n-2; i++)
		{
			if(ary[i] >= ary[i+1])
			{
				Ab = ary[i] - ary[i+1];
				
				
			}
			else
			{
				Ab = ary[i+1] - ary[i];
				
				
			}
			Rec[i] = Ab;
			
			
  		} 
  		for(int i = 1; i <= n-1; i++)
  		{
  			for(int k = 0; k <= n-2; k++)
  			{
  				if(Rec[k] == i)
  				{
  					COUN += 1;
  					break;
  					
				}
  				
  				
				  	
			}
  			
  			
		}
		if(COUN == n-1)
		{
			cout << "Jolly" << endl;
		}
  		else
  		{
  			cout << "Not jolly" << endl;
		}
  		
		  
		 
	}
	
	
}

