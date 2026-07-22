#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, x;
        cin>>n>>x;
        ll count = 0;
        for(ll i=1; i<=n; i++)
        {
            if(i!=x)
            {
                if((i+x)%2==0)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
