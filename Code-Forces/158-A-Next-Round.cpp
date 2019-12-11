#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int answer = 0;

    if (arr[0] != 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= arr[k - 1] || arr[i] == arr[k - 1])
            {
                if (arr[i] != 0)
                    answer++;
            }
        }
    }
    cout << answer << endl;
    return 0;
}