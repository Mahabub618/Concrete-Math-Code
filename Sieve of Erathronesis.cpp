#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cut[n+2]={0};
    cut[0] = cut[1] = 1;

    for(int i=3; i*i<=n; i+=2)
    {
        if(cut[i])
        {
            continue;
        }
        for(int j=i*i; j<=n; j+=i+i)
        {
            cut[j] = 1;
        }
    }
    cout << 2 << ' ';
    for(int i=3; i<=n; i+=2)
    {
        if(cut[i]==0) cout << i << ' ';
    }
    cout << endl;

}
