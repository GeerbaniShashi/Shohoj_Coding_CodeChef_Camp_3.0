#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll x, y;
    cin>>x>>y;
    ll z = x%10;
    if((10-z)*y + x >= 100) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
