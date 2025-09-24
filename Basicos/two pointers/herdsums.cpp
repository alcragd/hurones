// https://omegaup.com/arena/problem/herdsums/

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, sum = 0, i = 0, j = 0, cont = 0;

    cin >> n;

    while (i <= n)
    {
        while (sum <= n && i <= n)
        {
            sum += i;
            if (sum == n)
                cont++;
            i++;
        }
        while (sum >= n && j <= i)
        {
            sum -= j;
            if (sum == n)
                cont++;
            j++;
        }
    }

    cout << cont << "\n";
}