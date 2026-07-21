#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b;
        cin>>a>>b;
        if((a+b)%4==0 || (a+b)%4==1) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}
