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
        ll x = a[n-1]/2;
        ll index = n;
        for(ll i=n-2; i>=0; i--)
        {
            if(a[i] <= x)
            {
                index = i+1;
            }
            else
            {
                break;
            }
        }
        cout<<index<<endl;
    }
    return 0;
}
