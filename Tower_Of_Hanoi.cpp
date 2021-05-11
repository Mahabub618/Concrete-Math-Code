#include<bits/stdc++.h>
using namespace std;
#define ll long long
void tower_of_hanoi(int n, char fr, char tr, char ar)
{
    if(n==1)
    {
        cout << "Move disk 1 from rod " << fr << " to rod " << tr << endl;
        return;
    }
    tower_of_hanoi(n-1, fr, ar, tr);
    cout << "Move disk " << n << " from rod " << fr << " to rod " << tr << endl;
    tower_of_hanoi(n-1, ar, tr, fr);
}
int main()
{
    tower_of_hanoi(4, 'A', 'C', 'B');
    return 0;
}
