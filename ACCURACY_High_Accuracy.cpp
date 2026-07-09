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
        if(n % 3 == 0) cout<<0<<endl;
        else cout<<3 - (n % 3) <<endl;
    }
    return 0;
}
