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
        ll answer = 0;
        if(x % y == 0) answer = x/y;
        else answer = (x/y) + 1;
        cout<<(answer*z)<<endl;
    }
    return 0;
}
