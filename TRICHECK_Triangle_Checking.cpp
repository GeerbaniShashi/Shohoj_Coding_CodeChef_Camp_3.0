#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a, b, c;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
