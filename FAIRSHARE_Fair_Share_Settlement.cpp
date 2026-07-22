#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        ll gain = n / (k+1);
        cout<<n-(k*gain)<<endl;
    }
    return 0;
}
