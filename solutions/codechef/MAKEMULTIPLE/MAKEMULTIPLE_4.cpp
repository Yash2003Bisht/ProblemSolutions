// DATE: 28/10/2022, 06:31:11
// PROBLEM NAME: Make Multiple
// PROBLEM URL: https://www.codechef.com/problems/MAKEMULTIPLE
// PROBLEM DIFFICULTY RATTING: 1163
// STATUS: accepted
// TIME: 0.15
// MEMORY: 5.3M

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b;
        c=b-a;
        if (a == b || a <= c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

