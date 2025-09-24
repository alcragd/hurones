// https://cses.fi/problemset/task/1650

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q, a, b;
    cin >> n >> q;
    vector<long int> arr(n), acumsum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
            acumsum[0] = arr[i];
        else
            acumsum[i] = acumsum[i - 1] ^ arr[i];
    }
    while (q--)
    {
        cin >> a >> b;
        b--;
        a--;
        if (a > 0)
            cout << (acumsum[b] ^ acumsum[a - 1]) << "\n";
        else
            cout << acumsum[b] << "\n";
    }
}