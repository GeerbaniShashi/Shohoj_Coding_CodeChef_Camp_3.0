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
        if(n % 2 == 0 || n == 0 || n == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
