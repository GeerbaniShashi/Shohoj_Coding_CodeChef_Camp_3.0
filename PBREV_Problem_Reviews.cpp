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
            if(a[i] > 4) count++;
        }
        if(count == n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
