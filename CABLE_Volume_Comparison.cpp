#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a, b, c, x;
    cin>>a>>b>>c>>x;
    ll cuboid = a*b*c;
    ll cube = x*x*x;
    if(cuboid > cube) cout<<"CUBOID"<<endl;
    else if(cuboid < cube) cout<<"CUBE"<<endl;
    else cout<<"EQUAL"<<endl;
}
