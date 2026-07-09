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
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll index = 1, maximum = a[0];
        for(ll i=1; i<n; i++)
        {
            if(maximum < a[i])
            {
                index = i + 1;
                maximum = a[i];
            }
        }
        cout<<index<<endl;
    }
    return 0;
}
