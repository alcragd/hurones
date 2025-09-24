// https://codeforces.com/problemset/problem/1709/B

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<long long> Arr(n, 0), Izq(n, 0), Der(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
        if (i > 0)
        {
            if (Arr[i - 1] > Arr[i])
            {
                Izq[i] = Izq[i - 1] + Arr[i - 1] - Arr[i];
                Der[i] = Der[i - 1];
            }
            else
            {
                Izq[i] = Izq[i - 1];
                Der[i] = Der[i - 1] + Arr[i] - Arr[i - 1];
            }
        }
    }
    while (m--)
    {
        int a, b;
        long long res;
        cin >> a >> b;
        a--;
        b--;
        if (a > b)
        {
            res = Der[a] - Der[b];
        }
        else
        {
            res = Izq[b] - Izq[a];
        }
        cout << res << "\n";
    }
}