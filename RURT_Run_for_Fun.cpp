#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll x, y;
    cin>>x>>y;
    if(x < y)
    {
        if(y % x == 0) cout<<(y/x)-1<<endl;
        else cout<<(y/x)<<endl;
    }
    else cout<<0<<endl;
    return 0;
}
