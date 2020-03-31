#include<bits/stdc++.h>
using namespace std ;

int main()
{
	string name ;
	cin >> name ;
	transform(name.begin() , name.end() , name.begin() , ::tolower) ;
	for(int i = 0 ; i < name.length() ; i++)
	{
		if(!(name[i] == 'a' || name[i] == 'o' || name[i] == 'y' || name[i] == 'e' || name[i] == 'u' || name[i] == 'i') )
		{
			cout << "."<< name[i] ;
		}
		
	}
	cout << endl ;
	return 0;
}
