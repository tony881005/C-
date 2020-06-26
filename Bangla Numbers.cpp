#include <iostream>

using namespace std;
int main()
{
	int kuti = 10000000, lakh = 100000, hajar = 1000, shata = 100, bk, bl, bh, bs ,K, L, H, S, T = 1;
	long long A;
	while(cin >> A)
	{
		K = A / kuti;
		A = A % kuti;
		
		bk = K / kuti;
		K = K % kuti;
		bl = K / lakh;
		K = K % lakh;
		bh = K / hajar;
		K = K % hajar;
		bs = K / shata;
		K = K % shata;

		L = A / lakh;
		A = A % lakh;
		
		H = A / hajar;
		A = A % hajar;
		
		S = A / shata;
		A = A % shata;
		cout << T << ". ";
		if(bk != 0)
		{
			cout << bk << " kuti ";
		}
		if(bl != 0)
        {
        	cout << bl << " lakh ";
		}
		if(bh != 0)
        {
        	cout << bh << " hajar ";
		}
		if(bs != 0)
        {
        	cout << bs << " shata ";
		}
        if(K != 0)
        {
        	cout << K << " kuti ";
		}
		else if(bk != 0 || bl != 0 || bh != 0 || bs != 0)
		{
			cout << "kuti ";
		}
		if(L != 0)
        {
        	cout << L << " lakh ";
		}
		if(H != 0)
        {
        	cout << H << " hajar ";
		}
		if(S != 0)
        {
        	cout << S << " shata ";
		}
		if(A != 0)
		{
			cout << A;
		}
		if(bk + bl + bh + bs + K + L + H + S + A== 0)
		{
			cout << "0";
		}
		cout << endl;
		T += 1;
		
	}
	
	
} 
