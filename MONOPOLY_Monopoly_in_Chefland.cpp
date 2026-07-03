#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll r1, r2, r3;
        cin>>r1>>r2>>r3;
        if(r1+r2 < r3 || r2+r3 < r1 || r1+r3 < r2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
