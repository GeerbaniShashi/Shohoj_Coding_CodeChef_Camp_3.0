#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b, x, y;
        cin>>a>>b>>x>>y;
        cout<<(a+b)+(a/x)*(y-x)<<endl;
    }
    return 0;
}
