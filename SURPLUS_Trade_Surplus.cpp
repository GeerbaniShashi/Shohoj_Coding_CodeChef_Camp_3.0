#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a1, a2, b1, b2;
        cin>>a1>>a2>>b1>>b2;
        if((a1-a2) + (b1-b2) < 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
