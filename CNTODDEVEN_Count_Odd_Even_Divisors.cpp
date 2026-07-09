#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll odd_divisor(ll n)
{
    ll count = 1;
    for(ll i=3; i<=n/2; i++)
    {
        if(n % i == 0 && i % 2 == 1) count++;
    }
    if(n % 2 == 1 && n > 1) count++;
    return count;
}

ll even_divisor(ll n)
{
    ll count = 0;
    for(ll i=2; i<=n/2; i++)
    {
        if(n % i == 0 && i % 2 == 0) count++;
    }
    if(n % 2 == 0) count++;
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
        cout<<odd_divisor(n)<<" "<<even_divisor(n)<<endl;
    }
    return 0;

}
