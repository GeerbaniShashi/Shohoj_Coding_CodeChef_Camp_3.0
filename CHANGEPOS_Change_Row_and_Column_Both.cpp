#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1 != x2 && y1 != y2) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
