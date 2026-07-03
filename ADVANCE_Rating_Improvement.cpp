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
        ll z = x+200;
        if(y>=x && y<=z) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
