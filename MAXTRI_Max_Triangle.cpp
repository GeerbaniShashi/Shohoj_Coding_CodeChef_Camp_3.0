#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a = n, b = n - 1, c = n - 2;
        if(2*max(a, max(b,c)) < a+b+c) cout<<a+b+c<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}
