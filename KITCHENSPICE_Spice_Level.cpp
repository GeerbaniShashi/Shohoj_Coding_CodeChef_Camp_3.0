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
        if(n < 4) cout<<"MILD"<<endl;
        else if(n >= 4 && n < 7) cout<<"MEDIUM"<<endl;
        else cout<<"HOT"<<endl;
    }
    return 0;
}
