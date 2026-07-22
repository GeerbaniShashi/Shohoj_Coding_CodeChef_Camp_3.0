#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x, y;
        cin>>x>>y;
        ll difference = y - x;
        if(difference % 8 == 0) cout<<(difference/8)<<endl;
        else cout<<(difference/8)+1<<endl;
    }
    return 0;
}
