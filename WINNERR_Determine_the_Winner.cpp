#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll p1, p2, q1, q2;
        cin>>p1>>p2>>q1>>q2;
        if(max(p1, p2) < max(q1, q2)) cout<<"P"<<endl;
        else if(max(p1, p2) > max(q1, q2)) cout<<"Q"<<endl;
        else cout<<"TIE"<<endl;
    }
    return 0;
}
