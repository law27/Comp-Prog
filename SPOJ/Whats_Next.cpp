#include<iostream>
using namespace std;

int main()
{
    int A , B , C ;
    while ( cin >> A >> B >> C )
	{
		if ( C == 0 )
			return 0;
		else
		{
			if ( ( B - A ) + B == C )
				cout << "AP " << C + (B-A) << endl ;
			else
				cout << "GP " <<( B / A ) * C << endl ;
		}
	}
}
