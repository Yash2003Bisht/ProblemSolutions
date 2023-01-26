// QUESTION URL: https://www.codechef.com/problems/MAKEMULTIPLE
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

