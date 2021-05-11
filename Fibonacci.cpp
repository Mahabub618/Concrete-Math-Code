#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll a[n+2];
    a[0] = 0;
    a[1] = 1;
    for(int i=2; i<=n; i++)
    {
        a[i] = a[i-1]+a[i-2];
    }
    for(int i=0; i<=n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}
