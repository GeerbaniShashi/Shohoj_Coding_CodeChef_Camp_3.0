#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll x;
    double y;
    cin>>x>>y;
    if(x % 5 == 0)
    {
        if((double)x + 0.50 <= y)
        {
            cout<<fixed<<setprecision(2)<<(y-x-0.50)<<endl;
        }
        else
        {
            cout<<fixed<<setprecision(2)<<y<<endl;
        }
    }
    else
    {
        cout<<fixed<<setprecision(2)<<y<<endl;
    }
    return 0;
}
