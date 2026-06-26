#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, x, y;
        cin>>n>>x>>y;
        if((x*1)+(y*2) <= n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
