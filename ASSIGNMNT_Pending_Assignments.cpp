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
        if((x*y) <= (z*24*60)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
