#include <iostream>
#include <string>
#include <stack>
#include <iomanip>

using namespace std;
int main()
{
	float sum = 0;
	stack<float> st;
	string str;
	cin >> str;
	str[str.size() - 1] = '\0';
	for(int i = 2; i <= str.size(); i++)
	{
		if(str[str.size() - i] != '+' && str[str.size() - i] != '-' && str[str.size() - i] != '*' && str[str.size() - i] != '/')
		{
			st.push(str[str.size() - i] - 48);
			
			
		}
		else if(str[str.size() - i] == '+')
		{
			sum = st.top();
			st.pop();
			sum = sum + st.top();
			st.pop();
			st.push(sum);
			
			
		}
		else if(str[str.size() - i] == '-')
		{
			sum = st.top();
			st.pop();
			sum = sum - st.top();
			st.pop();
			st.push(sum);
			
						
		}
		else if(str[str.size() - i] == '*')
		{
			sum = st.top();
			st.pop();
			sum = sum * st.top();
			st.pop();
			st.push(sum);
			
			
		}
		else if(str[str.size() - i] == '/')
		{
			sum = st.top();
			st.pop();
			sum = sum / st.top();
			st.pop();
			st.push(sum);
			
			
		}
		
		
	}
	cout << setiosflags(ios::fixed) <<setprecision(3) << st.top();
	
	
} 
