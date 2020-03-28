#include <iostream>
using namespace std;

//My-Solution -- BruteForce Method
/* int main()
{
    int N;
    cin >> N;
    long long int answer = 0;

    for (int i = 0; i < N; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            answer += i;
        }
    }

    cout << answer << endl;
} */

//This Optimal Solution is based on the Euler Website https://projecteuler.net/thread=1;page=9#last

int sumDivisibleBy_n(long long int target, int n)
{
    long long p = target / n;
    return (n * (p * (p + 1)) / 2);
}

int main()
{
    long long int target;
    cin >> target;
    long long int answer = sumDivisibleBy_n(target - 1, 3) + sumDivisibleBy_n(target - 1, 5) - sumDivisibleBy_n(target - 1, 15);
    cout << answer << endl;
    return 0;
}

