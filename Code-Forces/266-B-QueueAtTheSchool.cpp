#include<iostream>
using namespace std;

int main()
{
    int num , t ;
    cin >> num >> t ;
    string val ;
    cin >> val ;
    string ans ;
    while( t-- )
    {
        for(int i = 0; i < num-1 ; i++)
        {
            if(val[i] == 'B' && val[i+1] == 'G')
            {
                ans+=val[i+1];
                ans+=val[i];
                i++;
            }
            else
            {
                ans+=val[i];
            }
        }
       if( ans.length() < num)
       {
           ans+=val[num-1];
       }
       val = ans ;
       ans = "";
    }
    cout << val << endl;
}
