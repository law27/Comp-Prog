#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt" , "w", stdout);
#endif
*/
	string val ;
	cin >> val ;
	string another ;
	cin >> another ;
	for (int i = 0 ; i < val.length() ; i++)
	{
		if (val[i] == '1' && another[i] == '1')
		{
			cout << 0 ;
		}
		else if ( val[i] == '1' )
		{
			cout << val[i] ;
		}
		else if ( another[i] == '1')
		{
			cout << another[i] ;
		}
		else
		{
			cout << val[i] ;
		}
	}
	cout << endl ;
	return 0;
}
