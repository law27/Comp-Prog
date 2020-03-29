#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;
    while( t-- )
    {
        int a , b ;
        cin >> a >> b;
        int ans = a + b;
        if( a < 10 && b < 10)
        {
            ans = a+b;
        }
        else if( a < 10 || b < 10 )
        {
            if( a < 10 )
            {
                if (( ( a * 10 ) + ( b % 10 ) ) + b / 10 > ans ) ans = ( ( a * 10 ) + ( b % 10 ) ) + b / 10 ;
                if (( ( a * 10 ) + ( b / 10 ) ) + b % 10 > ans ) ans = ( ( a * 10 ) + ( b / 10 ) ) + b % 10 ;
            }
            else if ( b < 10 )
            {
                if (( ( b * 10 ) + ( a % 10 ) ) + a / 10 > ans ) ans = ( ( b * 10 ) + ( a % 10 ) ) + a / 10 ;
                if (( ( b * 10 ) + ( a / 10 ) ) + a % 10 > ans ) ans = ( ( b * 10 ) + ( a / 10 ) ) + a % 10 ;
            }
            else
                ans = a+b;
        }
        else
        {
            int arr1[] = { a/10 , a%10 };
            int arr2[] = { b/10 , b%10 };
            int temp = (( arr2[0] * 10) + arr1[1] ) + ((arr1[0] * 10)  + arr2[1]) ;
            if( temp > ans )
            {
                ans = temp ;
            }
            temp =  (( arr2[1] * 10) + arr1[1] ) + ((arr2[0] * 10)  + arr1[0]); 
            if(temp > ans )
            {
                ans = temp ;
            }
            temp = ((arr1[0]*10) + arr2[0]) + ((arr1[1] * 10) + arr2[1]);
            if( temp > ans )
            {
                ans = temp ; 
            }
        }
        cout << ans << endl ;
    }
    return 0 ;
}

