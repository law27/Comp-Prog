#include<bits/stdc++.h>
using namespace std;

int main()
{
    string val ;
    cin >> val ;
    size_t pos = val.find("WUB");
    while( pos != string::npos )
    {
        val.replace(pos , 3 , " ");
        pos = val.find("WUB", pos+1);
    }
    cout << val << endl;
    return 0;
}
