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
        ll a[n], b[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];
        }
        vector<ll>v;
        for(ll i=0; i<n; i++)
        {
            if(a[i] >= 7)
            {
                v.push_back(b[i]);
            }
        }
        sort(v.begin(), v.end());
        if(v.size() == 0) cout<<"-1"<<endl;
        else cout<<v[0]<<endl;
    }
    return 0;

}
