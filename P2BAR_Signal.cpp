#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll count = 0;
        bool ok = false;
        for(ll i=0; i<n; i++)
        {
            if(s[i] == '0')
            {
                ok = true;
            }
            if(s[i] == '1' && ok)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
