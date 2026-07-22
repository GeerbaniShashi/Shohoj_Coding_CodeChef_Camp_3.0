#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x, y, d;
        cin>>x>>y>>d;
        if(abs(x-y) <= d) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
