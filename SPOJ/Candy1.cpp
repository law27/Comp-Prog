#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{
	while(true)
	{
		int num;
		cin >> num ;
		if( num != -1)
		{
			int ans = 0 ;
			int *arr = new int[num];
			for(int i = 0 ; i < num ; i++)
				cin >> arr[i];
			int sum = accumulate(arr , arr+num,0);
			if(sum % num == 0)
			{
				int val = sum / num ;
				for(int i = 0 ; i < num ; i++)
				{
					int temp = val - arr[i];
					if(temp >= 0)
						ans += temp;
				}
				cout << ans << endl ;
			}
			else
			{
				cout << -1 << endl ;
			}
		}
		else
			break;
	}    
}