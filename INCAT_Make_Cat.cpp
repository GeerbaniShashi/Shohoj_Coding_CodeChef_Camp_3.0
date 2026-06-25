#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string str;
    cin>>str;
    sort(str.begin(), str.end());
    string s = "act";
    if(s == str) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
