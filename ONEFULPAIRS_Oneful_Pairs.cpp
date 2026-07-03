#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a,b;
    cin>>a>>b;
    if(a + b + (a*b) == 111)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
