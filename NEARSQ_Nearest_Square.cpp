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
        ll square_root = sqrt(n);
        cout<<(square_root*square_root)<<endl;
    }
    return 0;
}
