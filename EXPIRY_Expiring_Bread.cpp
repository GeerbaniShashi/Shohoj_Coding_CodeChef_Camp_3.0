#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m, k;
        cin>>n>>m>>k;
        ll answer = 0;
        if(n % k == 0) answer = n/k;
        else answer = (n/k)+1;
        if(answer <= m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
