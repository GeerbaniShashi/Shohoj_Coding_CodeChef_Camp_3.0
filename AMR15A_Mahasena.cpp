#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll even = 0, odd = 0;
    for(ll i=0; i<n; i++)
    {
        if(a[i] % 2 == 0) even++;
        else odd++;
    }
    if(even > odd) cout<<"READY FOR BATTLE"<<endl;
    else cout<<"NOT READY"<<endl;
    return 0;
}
