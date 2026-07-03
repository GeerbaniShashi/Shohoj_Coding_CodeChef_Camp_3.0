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
        if(x < y) cout<<"REPAIR"<<endl;
        else if(x > y) cout<<"NEW PHONE"<<endl;
        else cout<<"ANY"<<endl;
    }
    return 0;
}
