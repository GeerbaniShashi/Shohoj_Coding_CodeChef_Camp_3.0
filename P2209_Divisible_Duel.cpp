#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l, r;
        cin>>l>>r;
        ll even = 0, odd = 0;
        for(ll i=l; i<=r; i+=l)
        {
            if(i%2==0) even = even + i;
            else odd = odd + i;
        }
        if(even >= odd) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
