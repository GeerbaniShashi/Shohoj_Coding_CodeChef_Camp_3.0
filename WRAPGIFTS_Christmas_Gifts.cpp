#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll h, l, w;
        cin>>h>>l>>w;
        ll answer = 2*((h*l)+(l*w)+(w*h));
        cout<<(1000/answer)<<endl;
    }
    return 0;
}
