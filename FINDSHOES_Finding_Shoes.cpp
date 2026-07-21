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
        if(x > y) cout<<x+(x-y)<<endl;
        else cout<<x<<endl;
    }
    return 0;
}
