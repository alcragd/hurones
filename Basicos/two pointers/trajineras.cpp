// two pointers
// https://omegaup.com/arena/problem/Trajineras/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, l;
    cin >> n >> l;
    vector<int> w(n);
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    int i = 0, j = 0, weight = 0, ans = INT_MAX, aux;
    while (i < n)
    {
        while (weight <= l and i < n)
            weight += w[i++];
        while (weight > l)
            weight -= w[j++];
        aux = i - j;
        ans = min(aux, ans);
    }

    cout << ans << "\n";
}
