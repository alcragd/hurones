#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    
    while(t--){
        string s;
        cin >> s;
        int cont=0;

        
        if(s[0]==')' || s[s.length()-1]=='('){
            cout << "NO\n";
        }
        else{
            for(int i=0;i<s.length();i++)
                {
                    if(s[i]=='?')
                     cont++;
                }
            if(cont%2)
                cout << "NO\n";
            else
            cout << "YES\n";
        }
    }

}