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
        ll n = pow(2, y);
        while(x--)
        {
            ll z = n;
            z/=2;
            n-=z;
        }
        cout<<n<<endl;
    }
    return 0;
}
