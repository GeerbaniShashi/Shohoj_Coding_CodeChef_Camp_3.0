#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll w, x, y, z;
        cin>>w>>x>>y>>z;
        if(w + (y*z) < x) cout<<"UNFILLED"<<endl;
        else if(w + (y*z) > x) cout<<"OVERFLOW"<<endl;
        else cout<<"FILLED"<<endl;
    }
    return 0;
}
