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
        ll a[n];
        set<ll>st;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            st.insert(a[i]);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}
