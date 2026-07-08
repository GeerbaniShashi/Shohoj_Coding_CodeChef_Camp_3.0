#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b, c, x;
        cin>>a>>b>>c>>x;
        if(a+b >= x || b+c >= x || c+a >= x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
