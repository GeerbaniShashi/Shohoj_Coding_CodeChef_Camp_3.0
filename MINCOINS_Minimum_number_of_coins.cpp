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
        if(n % 10 == 0)
        {
            cout<<(n/10)<<endl;
        }
        else if(n % 10 == 5)
        {
            cout<<(n/10)+1<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
