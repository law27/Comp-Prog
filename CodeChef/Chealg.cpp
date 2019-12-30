#include<iostream>
using namespace std;

//Dumbest Answer you can ever See
//But Still Works

int check(string str,char a,int* pos)
{
    int num = 0;
    while(str[*pos] == a)
    {
        num++;
        *pos += 1;
        if(*pos==str.size())
            break;
    }
    return num;
}

int main()
{
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        string str;
        int pos = 0;
        int checking;
        int result = 0;
        cin >> str;
        char a = str[0];
        int i = 0;
        for(i ; i < str.size() ;)
        {
            checking = check(str,a,&pos);
            if(checking > 99)
            {
                result += 4;
            }
            else if(checking > 9)
            {
                result += 3;
            }
            else
            {
                result += 2;
            }
            i = pos;
            a = str[pos];
        }


        if( result >= str.size() )
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
