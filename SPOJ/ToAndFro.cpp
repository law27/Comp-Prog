#include<iostream>
using namespace std;

int main()
{
    int num ;
    while(cin >> num)
    {
        if( num != 0 )
        {
            string input ;
            cin >> input ;
            string output = "";
            int a = 0;
            int *arr = new int[input.length()/num];
            for(signed int i = 0 ; i < input.length()/num ; i++)
            {
                if( i % 2 == 0)
                {
                    if( i == 0 )
                    {
                        arr[i] = a;
                    }
                    else
                    {
                        a+=1;
                        arr[i] = a;
                    }
                }
                else
                {
                a += (2*num) - 1;
                    arr[i] = a;
                }

            }
            for(int i = 0; i < num; i++)
            {
                for(int j = 0 ; j < input.length()/num ;j++ )
                {
                    if( j % 2 == 0 )
                    {
                        output+=input[arr[j]++];
                    }
                    else
                    {
                        output+=input[arr[j]--];
                    }
                }
            }
            cout << output << endl ;
        }
        else
        {
            break;
        }
    }
}
