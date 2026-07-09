#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x, n;
        cin>>x>>n;
        ll maximum = x + (n-x)/2;
        ll minimum = (n-x)/2;
        cout<<maximum<<" "<<minimum<<endl;
    }
    return 0;
}
