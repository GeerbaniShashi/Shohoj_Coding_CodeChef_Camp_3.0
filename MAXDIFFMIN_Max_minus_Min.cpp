#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b, c;
        cin>>a>>b>>c;
        cout<<max(a,max(b,c)) - min(a,min(b,c))<<endl;
    }
    return 0;
}
