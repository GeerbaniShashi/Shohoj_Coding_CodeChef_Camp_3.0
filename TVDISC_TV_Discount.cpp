#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b, c, d;
        cin>>a>>b>>c>>d;
        if(a-c < b-d) cout<<"FIRST"<<endl;
        else if(a-c > b-d) cout<<"SECOND"<<endl;
        else cout<<"ANY"<<endl;
    }
    return 0;
}
