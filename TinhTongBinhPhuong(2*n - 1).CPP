#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long n, sum = 0;
    cin >> n;
    for (long i = 1; i <= n; i++)
        sum += pow((i * 2 - 1), 2);
    cout << sum;
}
