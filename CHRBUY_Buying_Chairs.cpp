#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll w, p, k;
        cin>>w>>p>>k;
        if(w >= k) cout<<k*2<<endl;
        else cout<<min(k, w)*2 + (k-w)<<endl;
    }
    return 0;
}
