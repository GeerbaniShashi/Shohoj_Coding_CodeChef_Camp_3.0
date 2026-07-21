#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x, y;
        cin>>x>>y;
        if(x == 0)
        {
            for(ll i=0; i<y; i++)
            {
                cout<<2;
            }
            cout<<endl;
        }
        else if(y == 0)
        {
            for(ll i=0; i<x; i++)
            {
                cout<<1;
            }
            cout<<endl;
        }
        else
        {
            ll n = x/2;
            for(ll i=0; i<n; i++)
            {
                cout<<1;
            }
            for(ll i=0; i<y; i++)
            {
                cout<<2;
            }
            for(ll i=0; i<n; i++)
            {
                cout<<1;
            }
            cout<<endl;
        }
    }
    return 0;
}
