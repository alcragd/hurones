#include <iostream>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int t;
   cin >> t;
         
    while(t--){
        long long n,sum=0;
        cin >> n;
        
        
        if(n%2050!=0)
            cout << -1 << "\n";
        else
            {
                {
                n/=2050;
                while(n!=0){
                    sum+=n%10;
                    n/=10;
                }
            }
        if(sum)
            cout << sum << "\n";
        else    
            cout << -1 << "\n";
         }
    }
  return 0;
}