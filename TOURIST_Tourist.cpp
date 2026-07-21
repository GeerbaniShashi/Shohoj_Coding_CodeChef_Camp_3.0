#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, a, b;
        cin>>n>>a>>b;
        ll x[n], y[n];
        for(ll i=0; i<n; i++)
        {
            cin>>x[i]>>y[i];
        }
        ll value = 0, minimum = INT_MAX;
        for(ll i=0; i<n; i++)
        {
            value = abs(a - x[i]) + abs(b - y[i]);
            minimum = min(minimum, value);
        }
        cout<<minimum<<endl;
    }
    return 0;
}
