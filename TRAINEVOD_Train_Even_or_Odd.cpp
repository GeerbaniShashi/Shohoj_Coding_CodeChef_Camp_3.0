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
        ll sum1 = 0, sum2 = 0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if(i%2==0) sum1 = sum1 + a[i];
            else sum2 = sum2 + a[i];
        }
        cout<<max(sum1, sum2)<<endl;
    }
    return 0;
}
