#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if(x >= 2*y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
