// https://codeforces.com/problemset/problem/1469/B

#include <iostream>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int r = 0, b = 0, acumr = 0, acumb = 0, max1 = 0, max2 = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> r;
            acumr += r;
            max1 = max(acumr, max1);
        }
        cin >> m;

        for (int i = 1; i <= m; i++)
        {
            cin >> b;
            acumb += b;
            max2 = max(acumb, max2);
        }

        cout << max1 + max2 << "\n";
    }
}