#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll fact(ll n)
{
    if(n==0 || n==1) return 1;
    else return n*fact(n-1);
}
int32_t main()
{
    ll n;
    cin >> n;
    ll ans = fact(n);
    cout << ans << endl;
}
