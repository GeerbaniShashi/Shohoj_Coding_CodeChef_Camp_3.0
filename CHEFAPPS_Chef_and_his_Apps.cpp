#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll w, x, y, z;
        cin>>w>>x>>y>>z;
        if(w-(x+y) >= z) cout<<0<<endl;
        else if((w-x)>=z || (w-y)>=z) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
