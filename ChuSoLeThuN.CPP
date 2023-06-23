#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
    string chuoi;
    cin >> n;
    for (int i = 3; i <= n*3; i+=3)
        chuoi += to_string(i);
    cout << "Chu so thu " << n << " la : " << chuoi[n-1];
}
