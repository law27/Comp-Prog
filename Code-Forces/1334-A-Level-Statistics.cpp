#include < bits / stdc ++. h >
using namespace std ; 

int main ()
{
    int t ;
    cin >> t ;
    while ( t -)
    {
        int num ;
        cin >> num ;
        int min1 = - 1 , min2 = - 1 ;  
        int temp1 , temp2 ;
        bool val = true ; 
        for ( int i = 0 ; i < num ; i ++) 
        {
            cin >> temp1 >> temp2 ;
            int avoid = (( temp1 - min1 ) - ( temp2 - min2 )); 
            if ( i ! = 0 ) 
            {
                if ( temp1 < min1 || temp2 < min2   || avoid < 0 )  
                {
                    val = false ; 
                }
            }
            if ( temp2 > temp1 )
                val = false ; 
            min1 = temp1 ;
            min2 = temp2 ;
        }
        if ( val )
            cout << "YES" << endl ;  
        else
            cout << "NO" << endl ;  
    }
    return 0 ; 
}
