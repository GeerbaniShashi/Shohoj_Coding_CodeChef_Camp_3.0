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
        ll z = x/y;
        cout<<min(20LL, z)<<endl;
    }
    return 0;
}
