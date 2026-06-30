#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b, c;
        cin>>a>>b>>c;
        if(max(a,max(b,c)) == a)
        {
            cout<<"Alice"<<endl;
        }
        else if(max(a,max(b,c)) == b)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Charlie"<<endl;
        }
    }
    return 0;
}
