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
        ll d[n], times[n];
        for(ll i=0; i<n; i++)
        {
            cin>>d[i]>>times[i];
        }
        ll maximum = INT_MIN, value = 0;
        for(ll i=0; i<n; i++)
        {
            ll x = d[i]/times[i];
            if(x > maximum)
            {
                maximum = x;
                value = i+1;
            }
        }
        cout<<value<<endl;
    }
    return 0;
}
