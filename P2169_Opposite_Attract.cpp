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
        string s;
        cin>>s;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='1') s[i]='0';
            else s[i]='1';
        }
        cout<<s<<endl;
    }
    return 0;
}
