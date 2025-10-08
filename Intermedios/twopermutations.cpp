// https://codeforces.com/contest/1761/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, a, b;
        string r;

        cin >> n >> a >> b;

        if (n - a - b >= 2 || (n == a && a == b && b))
        {
            r = "YES";
        }
        else
        {
            r = "NO";
        }

        cout << r << endl;
    }
}