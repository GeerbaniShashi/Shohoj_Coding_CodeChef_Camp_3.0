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
        if((x*100) < (y*10)) cout<<"DISPOSABLE"<<endl;
        else cout<<"CLOTH"<<endl;
    }
    return 0;
}
