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
        ll z = y+5;
        bool ok = false;
        for(ll i=y; i<=z; i++)
        {
            for(ll j=y; j<=z; j++)
            {
                if(x+i+j == 50)
                {
                    ok = true;
                    break;
                }
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
