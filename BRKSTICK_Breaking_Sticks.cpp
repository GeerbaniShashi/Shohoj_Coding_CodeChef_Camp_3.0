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
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll count = 0;
        for(ll i=0; i<n; i++)
        {
            if(a[i] > 1)
            {
                count += (a[i]-1);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
