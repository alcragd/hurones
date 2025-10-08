// https://codeforces.com/problemset/problem/1810/A

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
        int n;
        cin >> n;
        string result = "NO";

        vector<int> nums(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> nums[i];
        }

        for (int i = n; i >= 1; i--)
        {
            if (nums[i] <= i)
            {
                result = "YES";
                break;
            }
        }
        cout << result << endl;
    }

    return 0;
}