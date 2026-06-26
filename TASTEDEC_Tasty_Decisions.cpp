#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x, y;
        cin>>x>>y;
        if((x*2) > (y*5)) cout<<"Chocolate"<<endl;
        else if((x*2) < (y*5)) cout<<"Candy"<<endl;
        else cout<<"Either"<<endl;
    }
    return 0;
}
