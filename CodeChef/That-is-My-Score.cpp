#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int N;
        cin >> N;
        int arr[9] = {0};
        for (int i = 0; i < N; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a < 9)
            {
                if (arr[a] < b)
                {
                    arr[a] = b;
                }
            }
        }
        int answer = 0;
        for (int i = 0; i < 9; i++)
        {
            answer += arr[i];
        }
        cout << answer << endl;
    }
}