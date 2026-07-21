#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x, y, z;
        cin>>x>>y>>z;
        if(y-x == z-y) cout<<0<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
