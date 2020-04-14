#include<bits/stdc++.h>
using namespace std;


bool upCheck(int x , int y , multimap<int,int>&arr)
{
    for(auto i = arr.begin() ; i != arr.end() ; i++)
    {
        if( i->first == x)
        {
            if( i->second > y)
                return true;
        }
    }
    return false;
}

bool downCheck(int x , int y , multimap<int,int>&arr)
{
    for(auto i = arr.begin() ; i != arr.end() ; i++)
    {
        if( i->first == x)
        {
            if( i->second < y)
                return true;
        }
    }
    return false;
}

bool leftCheck(int x , int y , multimap<int,int>&arr)
{
    for(auto i = arr.begin() ; i != arr.end() ; i++)
    {
        if( i->second == y)
        {
            if( i->first < x)
                return true;
        }
    }
    return false;
}

bool rightCheck(int x , int y , multimap<int,int>&arr)
{
    for(auto i = arr.begin() ; i != arr.end() ; i++)
    {
        if( i->second == y)
        {
            if( i->first > x)
                return true;
        }
    }
    return false;
}




int main()
{
    multimap<int ,int>arr;
    int num ;
    cin >> num ;
    bool left , right , up , down ;
    int temp_1 , temp_2 ;
    for(int i = 0 ;i  < num ; i++)
    {
        cin >> temp_1 >> temp_2 ;
        arr.insert(make_pair(temp_1,temp_2));
    }
    int ans = 0 ;
    for(auto i = arr.begin() ; i != arr.end() ; i++)
    {
        left = leftCheck(i->first , i->second , arr);
        right = rightCheck(i->first , i->second , arr);
        up = upCheck(i->first , i->second , arr);
        down = downCheck(i->first , i->second , arr);
        if( left && right && up && down)
            ++ans ;
    }
    cout << ans << endl;
    return 0;

}
