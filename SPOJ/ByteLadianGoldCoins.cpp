#include <bits/stdc++.h>
using namespace std;
vector<long int>law(500000000,0);

inline long int max(long int num1 , long int num2)
{
	return (num1 > num2) ? num1 : num2;
}

long int goldCoin(long int num)
{
	if(num > 0)
	{
		if( law[num] == 0)
		{
			law[num] = max( num , goldCoin(num/2) + goldCoin(num/3) + goldCoin(num/4) );
			return law[num];
		}
		else
		{
			return law[num];
		}
	}
	else
	{
		return 0;
	}
}

int main()
{
	long long int num ;
	while( cin >> num)
	{
		for(int i = 0; i < 10 ; i++)
			law[i] = i;
		long int ans = max( num , goldCoin(num/2) + goldCoin(num/3) + goldCoin(num/4) );
		cout << ans << endl;
	}
}