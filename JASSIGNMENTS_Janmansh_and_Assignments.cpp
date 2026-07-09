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
        if((10 - n) >= 3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
