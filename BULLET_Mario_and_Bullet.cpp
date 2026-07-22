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
        ll division = y/x;
        ll difference = z - division;
        if(difference <= 0) cout<<0<<endl;
        else cout<<difference<<endl;
    }
    return 0;
}

