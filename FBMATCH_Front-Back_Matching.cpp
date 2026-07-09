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
        map<char, ll> mp;
        map<char, ll>::iterator it;
        for(ll i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        bool ok  = false;
        for(it = mp.begin(); it != mp.end(); it++)
        {
            if((*it).second >= 2)
            {
                ok = true;
                break;
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
