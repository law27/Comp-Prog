#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool checkPossible(ll start , ll des , list<ll>*adj, ll num)
{
    vector<bool>visited(num-1,false);
    stack<ll>q ;
    q.push(start);
    ll temp ;
    while(!q.empty())
    {
        temp = q.top();
        q.pop();
        if(!visited[temp])
            visited[temp] = true;
        for(auto i = adj[temp].begin() ; i != adj[temp].end() ; i++)
        {
            if(!visited[*i])
            {
                if(*i == des)
                    return true;
                q.push(*i);
            }
        }
    }
    return false;
}

int main()
{
    ll n, des ;
    cin >> n >> des ;
    list<ll>*adj = new list<ll>[n+1];
    for(int i = 1 ; i <= n-1 ; i++)
    {
        ll temp ;
        cin >> temp ;
        adj[i].push_back(i+temp);
    }
   if(checkPossible(1,des,adj,n))
       cout << "YES" << endl;
   else
       cout << "NO" << endl;
   return 0;
}
