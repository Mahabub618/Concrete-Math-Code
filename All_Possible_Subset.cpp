#include<bits/stdc++.h>
using namespace std;
int n, a[21];
char c[21];
void print()
{
    bool flag = false;
    cout << '{';
    for(int i=0; i<n; i++)
    {
        if(a[i]==1)
        {
            if(flag) cout << ", ";
            cout << c[i];
            flag = true;
        }
    }
    cout << '}' << endl;
}
void Generate(int i)
{
    if(i==n)
    {
        print();
        return;
    }
    a[i] = 0;
    Generate(i+1);
    a[i] = 1;
    Generate(i+1);
}
int main()
{
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> c[i];
    }
    Generate(0);
}
