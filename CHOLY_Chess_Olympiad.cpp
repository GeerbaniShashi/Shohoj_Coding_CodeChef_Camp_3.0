#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll x, y, z;
    cin>>x>>y>>z;
    ll remain = 4 - (x+y+z);
    float player1 = x + y*0.5;
    float player2 = z + y*0.5;
    player1 += remain;
    if(player1 > player2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
