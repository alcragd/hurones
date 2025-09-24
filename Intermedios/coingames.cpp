// https://codeforces.com/problemset/problem/1972/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, ucont = 0, dcont = 0;
        string S, ans;
        cin >> n >> S;

        for (int i = 0; i < n; i++)
        {
            if (S[i] == 'U')
                ucont++;
            if (S[i] == 'D')
                dcont++;
        }
        if (ucont % 2 && dcont % 2)
            ans = "YES";
        if (ucont % 2 == 0 && dcont % 2)
            ans = "NO";
        if (ucont % 2 && dcont % 2 == 0)
            ans = "YES";
        if (ucont % 2 == 0 && dcont % 2 == 0)
            ans = "NO";

        cout << ans << endl;
    }

    return 0;
}