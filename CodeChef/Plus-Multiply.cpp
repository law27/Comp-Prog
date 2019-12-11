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
        int *arr = new int[N];

        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        int count = 0;
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (arr[i] * arr[j] == arr[i] + arr[j])
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}