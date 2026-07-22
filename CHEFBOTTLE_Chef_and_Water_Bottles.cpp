#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, x, k;
        cin>>n>>x>>k;
        cout<<min(n, k/x)<<endl;
    }
    return 0;
}
