#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool checkOdd(vector<int>&law, int *odds , int *evens)
{
    int even = 0 ;
    int odd = 0 ;
    for(int i = 0 ; i < law.size() ; i++)
    {
        if(law[i]%2==0)
        {
            *evens = *evens + i;
            even++;
        }
        else
        {
            *odds = *odds + i;
            odd++;
        }
    }
    return (even > odd);
}

int main()
{
    int n;
    cin >> n;
    vector<int>law(n , 0);
    for(int i=0 ;i < n ; i++)
    {
        cin >> law[i];
    }
    int odd = 0;
    int even = 0;
    if(checkOdd(law,&odd,&even))
    {
        cout << odd+1 << endl;
    }
    else
    {
        cout << even+1 << endl;
    }

    return 0;
}
 
