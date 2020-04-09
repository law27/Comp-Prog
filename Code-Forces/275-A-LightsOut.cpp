#include<bits/stdc++.h>
using namespace std;

void fillTheArray(int i , int j , int arr[][3])
{
    arr[i][j] = ((arr[i][j]==1) ? 0 : 1 );
    if(i-1 >= 0)
        arr[i-1][j] = ((arr[i-1][j]==1) ? 0: 1 );
    if(j-1 >= 0)
        arr[i][j-1] = ((arr[i][j-1]==1) ? 0 : 1 );
    if(i+1 < 3)
        arr[i+1][j] = ((arr[i+1][j]==1) ? 0 : 1 );
    if(j+1 < 3)
        arr[i][j+1] = ((arr[i][j+1]==1) ? 0 : 1 );
}

int main()
{
    int arr[3][3];
    for(int i=0; i <3 ;i++)
        for(int j=0; j < 3 ;j++)
            arr[i][j] = 1;
    int temp ;
    for(int i= 0; i < 3; i++)
    {
        for(int j = 0; j < 3 ; j++)
        {
            cin >> temp ;
            if(temp != 0)
            {
                if(temp%2==1)
                    fillTheArray(i,j,arr);
            }
        }
    }
    for(int i= 0 ; i < 3 ; i++)
    {
        for(int j = 0; j < 3 ; j++)
        {
            cout << arr[i][j] ;
        }
        cout << endl;
    }

    return 0;
}
