// https://cses.fi/problemset/task/1652

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q, aux;
    char trees;
    cin >> n >> q;
    vector<vector<int>> Acum(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            aux = 0;
            cin >> trees;
            if (trees == '*')
                aux = 1;
            if (i > 0)
                Acum[i][j] += Acum[i - 1][j];
            if (j > 0)
                Acum[i][j] += Acum[i][j - 1];
            if (i > 0 && j > 0)
                Acum[i][j] -= Acum[i - 1][j - 1];
            Acum[i][j] += aux;
            ;
        }
    }
    while (q--)
    {
        int x1, x2, y1, y2, result = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        x1--;
        x2--;
        y1--;
        y2--;
        if (x1 > 0)
            result -= Acum[x1 - 1][y2];
        if (y1 > 0)
            result -= Acum[x2][y1 - 1];
        if (x1 > 0 && y1 > 0)
            result += Acum[x1 - 1][y1 - 1];
        result += Acum[x2][y2];
        cout << result << endl;
    }
}