#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll p1, p2, p3, p4;
    cin>>p1>>p2>>p3>>p4;
    ll count = 0;
    if(p1 >= 10) count++;
    if(p2 >= 10) count++;
    if(p3 >= 10) count++;
    if(p4 >= 10) count++;
    cout<<count<<endl;
    return 0;
}
