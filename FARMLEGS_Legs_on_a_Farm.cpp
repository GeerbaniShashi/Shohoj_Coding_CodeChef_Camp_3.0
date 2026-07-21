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
        ll count = 0;
        while(n >= 4)
        {
            n-=4;
            count++;
        }
        while(n >= 2)
        {
            n-=2;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
