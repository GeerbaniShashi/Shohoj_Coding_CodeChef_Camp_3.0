#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll evendivisor(ll n)
{
    ll count = 0;
    for(ll i=2; i<=n/2; i++)
    {
        if(n % i == 0 && i % 2 == 0)
        {
            count++;
        }
    }
    if(n % 2 == 0) count++;
    return count;
}

ll odddivisor(ll n)
{
    ll count = 1;
    for(ll i=3; i<=n/2; i++)
    {
        if(n % i == 0 && i % 2 == 1)
        {
            count++;
        }
    }
    if(n % 2 == 1 && n > 1) count++;
    return count;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll even = evendivisor(n);
        ll odd = odddivisor(n);
        if(even > odd) cout<<1<<endl;
        else if(even < odd) cout<<"-1"<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
