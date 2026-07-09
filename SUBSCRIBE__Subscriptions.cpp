#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, x;
        cin>>n>>x;
        ll ans = 0;
        if(n % 6 == 0) ans = n/6;
        else ans = (n/6) + 1;
        cout<<ans*x<<endl;
    }
    return 0;
}
