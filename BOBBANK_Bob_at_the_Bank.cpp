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
        ll answer = w + (x*z) - (y*z);
        cout<<answer<<endl;
    }
    return 0;
}
